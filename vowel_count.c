//Reads a sentence and prints frequency of each of the vowels and total count of consonants

// Author : Melrick Mascarenhas

#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char str[100];
	int i,vc=0,cc=0;
	char ch;
	printf("Enter the string\n");
	scanf("%s",str);
	while(str[i]!='\0')
		{
			if(isalpha(str[i]))
				{
					ch=tolower(str[i]);
					if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
					vc++;
					else
					cc++;
				}i++;
		}
printf("The no is vowels is %d\n",vc);
printf("The no is consonants is %d\n",cc);
return;
}
