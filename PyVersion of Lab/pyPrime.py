def isPrime(n):
	for i in range(2,int(n/2)+1):
		if(int(n % i) == 0):
			return False
	return True

if __name__ == '__main__':
	print("Enter a number between 2 to 100")
	x = int(input())
	if(isPrime(x)):
		print("prime:", x)
	else:
		print('Not a prime')
