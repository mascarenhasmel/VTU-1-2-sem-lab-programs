/*
	Design and develop an algorithm to find the reverse of an integer number NUM and check whether t is a PALINDROME or not.
	Implement a C program for the developed algorithm that takes an integer number as input and output the reverse of the same with
	suitable messages.

	Ex:
	NUM = 2014
	Reverse = 4012

	NOT a Palindrome

*/

// Author : Melrick Mascarenhas

#include<stdio.h>
int main()
{
	int a,b,rem,rev=0;

	printf("enter the no:");
	scanf("%d",&a);

	b=a;

	while(a!=0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a/=10;
	}

	printf("\nThe reversed no is %d\n",rev);

	if(b==rev)
		printf("its paindrome\n");
	else
		printf("its not paindrome\n");
		
	return;
	}

