#include<stdio.h>

void main()
{
	int age;
	printf("Enter a Age: ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("person is eligible to vote");
	}
	else
	{
	    printf("person is not eligible to vote");	
	}
}