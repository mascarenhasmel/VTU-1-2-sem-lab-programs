#include<stdio.h>
int fact(int n)
{ 
	if(n==0)
	return 1;
	else
	return (n*fact(n-1));
	
	}
int main()
{
	int n,r;float res;
	printf("enter n anr r:");
	scanf("%d%d",&n,&r);
	res=(float)fact(n)/(fact(n-r)*fact(r));
	printf("%f",res);
return;
}		
