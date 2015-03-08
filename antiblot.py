# your code goes here
n=int(input())
n=n*2;
while(n!=0):
	s=input()
	if s:
		op0, op1, res =0,0,0
		side = s.split('=')
		op = side[0].split('+')
		if not "machula" in op[0]:
			op0 = int(op[0].strip())
		if not "machula" in op[1]:
			op1 = int(op[1].strip())
		if not "machula" in side[1]:
			res = int(side[1].strip())
		if(op0 and op1):
			res = op0+op1
		elif(res and op0):
			op1 = res - op0
		elif(op1 and res):
			op0 = res - op1
		s=str(op0) + " + " + str(op1) + " = " + str(res)
		print(s)
	n=n-1