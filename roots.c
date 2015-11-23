/*
	Design and develop a flowchart or an algorithm that takes three coefficients (a,b, and c) of a quadratic equation
	ax^2 + bx + c = 0  as input and compute all possible roots. Implement a C program for the developed flowchart/algorithm and
	execute the same to output the possible roots for a given set of coefficients with appropriate messages.


*/

// Author : Melrick Mascarenhas

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	float a,b,c,des,x1,x2,r;
	printf(" A quadratic equation is of the form ax^2+bx+c\n");
	printf("Enter coefficients of a quadratic equation:");
	scanf("%f%f%f",&a,&b,&c); 
	
	des=(b*b)-(4*a*c);
	if(des==0)
	{
		x1=x2=(-b/(2*a));
		printf("roots are equal\n");
		printf("root 1 =%f , root 2 =%f\n",x1,x2);
		}
	else if(des>0)
	{
		x1=(-b+sqrt(des)/(2*a));	
		x1=(-b-sqrt(des)/(2*a));
		printf("roots are real and distinct\n");
		printf("root 1 =%f , root 2 =%f\n",x1,x2);
		}
	else 
	{
		x1=(-b/2*a);
		des*=-1;
		r=sqrt(des)/(2*a);
		printf("roots are imaginary\n");
		printf("root 1 =%f+i%f , root 2 =%f+i%f\n",x1,r,x1,r);
		
		}
		return;
		}
