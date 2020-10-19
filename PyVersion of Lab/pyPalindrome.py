def checkPalindrome(a):
	rev = 0
	b=a
	while(b!=0):
		rem = int(b % 10)
		rev = rev * 10 + rem
		b = int(b/10)
	if(rev == a):
		return True
	return False

if __name__ == '__main__':
	print("Please enter a number")
	n = int(input())
	if(checkPalindrome(n)):
		print('It is a palindrome')
	else:
		print('Not a palindrome')