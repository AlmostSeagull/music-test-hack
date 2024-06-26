def read_symbols():
	addr_set = []
	with open("asm/symbols.asm", "r") as fh:
		lines = fh.readlines()
		for x in lines:
			if ".definelabel" in x:
				name = x.split(".definelabel ")[1].split(", ")[0]
				addr = "0x" + x.split(", ")[1][4:10]
				addr_set.append({name,addr})
	return addr_set

def read_h_file(symbols_data):
	addr_set = []
	type_set = []
	with open("include/vanilla_defs.h", "r") as fh:
		c = fh.readlines()
		for x in symbols_data:
			for y in c:
				if "extern " in y:
					if ("(" not in y) and (")" not in y):
						y = y.split("extern ")[1]
						if "//" in y:
							y = y.split("//")[0]
						z = y.split(" ")
						s = ""
						n = z[len(z) - 1].split(";")[0]
						if n == list(x)[1]:
							for i in range(len(z) - 1):
								s += z[i] + " "
							if s not in type_set:
								type_set.append(s)
							addr_set.append([list(x)[0],list(x)[1],s])
	return addr_set

def create_wch_file(_data, watch_file_name):
	wch_info = [
		["*", "d", "h"], # Pointer
		["float", "d", "f"],
		["unsigned int", "d", "h"],
		["unsigned short", "w", "h"],
		["short", "w", "h"],
		["unsigned char", "b", "h"],
		["char", "b", "h"],
		["f32", "d", "f"],
		["u32", "d", "h"],
		["s32", "d", "h"],
		["int", "d", "h"],
		["u16", "w", "h"],
		["s16", "w", "h"],
		["u8", "b", "h"],
		["s8", "b", "h"],
	]
	with open(watch_file_name, "w") as fh:
		lines = ["SystemID N64"]
		for x in _data:
			found = False
			for y in wch_info:
				if y[0] in x[2]:
					_size = y[1]
					_type = y[2]
					found = True
					break
			if found:
				lines.append(str(x[0][2:]) + "	" + str(_size) + "	" + str(_type) + "	1	RDRAM	" + str(x[1]))
		for x in lines:
			fh.write(x + "\n")

create_wch_file(read_h_file(read_symbols()), "rom/dk64-musictest-dev.wch")