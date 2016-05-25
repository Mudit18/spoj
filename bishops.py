while(1):
	try:
		n=raw_input()
	except EOFError:
		break
	if(n==''):
		break
	elif(int(n)>1):
		print (2*int(n) - 2)
	else:
		print n