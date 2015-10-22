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
