/*
  Design and develop a C function isprime(num) that accepts an integer argument and returns 1 if the argument is prime,
  a 0 otherwise. Write a C program that invokes this function to generate prime numbers between the given range
  
*/

// Author : Melrick Mascarenhas

#include<stdio.h>
#include<math.h>

int isprime(int x)
{
int i;
for(i=0;i<x;i++)
    {if(x%i==0)
       return 0;
     }
return 1;
}

int main()
{
	int n1,j;
	printf("enter:");
	scanf("%d",&n1);
	for(j=n1;j<100;j++)
     {	
     	if(isprime(j))
       	printf("\n%d",j);
      }
return;
}
