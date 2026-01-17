#include<stdio.h>

void main()
{
	int no1,no2;
	
	printf("Enter two numbers: ");
	scanf("%d%d",&no1,&no2);
	char ch;
	printf("Enter which type of operation you wanted to do: ");
	scanf(" %c",&ch);
	
	if(ch=='+')
	{
		printf("Sum is: %d",no1+no2);
	}
	else if(ch=='-')
	{
		printf("Subtraction is: %d ",no1-no2);
	}
	else if(ch=='*')
	{
		printf("Multiplication is: %d ",no1*no2);
	}
	else if(ch=='/')
	{
		printf("Division is: %d ",no1/no2);
	}
	else if(ch=='%')
	{
		printf("Mod is: %d ",no1%no2);
	}
	else
	{
		printf("Its not a operator");
	}
}