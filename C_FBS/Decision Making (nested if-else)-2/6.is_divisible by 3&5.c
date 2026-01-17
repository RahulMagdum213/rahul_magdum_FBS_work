#include<stdio.h>

void main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(num%3==0 && num%5==0)
	{
		printf("Divisible by both 3&5");
	}
	else
	{
		if(num%3==0)
		    printf("Divisible by 3");
		    
		else if(num%5==0)
		    printf("Divisible by 5");
		    
		else
		    printf("Divisible by none");
		    
	}
}