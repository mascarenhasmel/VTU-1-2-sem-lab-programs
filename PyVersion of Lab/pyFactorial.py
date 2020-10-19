
def fact(n):
	if(n==0):
		return 1
	else:
		return(n*fact(n-1))

if __name__ == '__main__':
	print("please enter a number you want to find a factorial for")
	x = int(input())
	print("Output:", fact(x))