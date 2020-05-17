import sys


if __name__=="__main__":
	if(len(sys.argv)!=2):
		print('Usage: genAssembly.py [icg.txt]')
		sys.exit()
	icg_file=sys.argv[1]
	f=icg=open(icg_file,"r")
	list_of_lines=list()
	for line in f:
		list_of_lines.append(line)
	f.close()
	print(list_of_lines)
	for line in list_of_lines:
		if len(list(line.split()))==2:
			print('GOTO Statement')
		elif len(list(line.split()))==3:
			print('Assignment Statement')
		elif len(list(line.split()))==4:
			print('Branch Condition')
		elif len(list(line.split()))==5:
			print('ALU Operation')
