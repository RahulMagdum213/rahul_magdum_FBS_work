#include<stdio.h>

void main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is Even number",a);
	}
	
	else
	{
	    printf("%d is Odd number",a);	
	}
}