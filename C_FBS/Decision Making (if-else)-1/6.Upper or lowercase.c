#include<stdio.h>

void main()
{
	char ch;
	printf("Enter a char: ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("Its a Uppercase char");
	}
	else
	{
		printf("Its a lowercase char");
	}
	
}