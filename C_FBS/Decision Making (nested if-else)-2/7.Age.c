#include<stdio.h>

void main()
{
	int age;
	printf("Enter age: ");
	scanf("%d",&age);
	
	if(age<12)
	{
		printf("Child");
	}
	else if(age>12 && age<=19)
	{
		printf("Teenage");
	}
	else if(age>19 && age<59)
	{
		printf("Adult");
	}
	else
	{
		printf("Senior");
	}
	
}