#include<stdio.h>


void main()
{
	int a,b,c;
	printf("Enter three sides of triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<=0 || b<=0 || c<=0)
	{
		printf("Invalid inputs triangle needs positive values");
	}
	else if(a+b<=c || b+c<=0 || a+c<=0)
	{
		printf("Sum of two sides is not greater than the third side ");
	}
	
	else if(a==b && a==c)
	{
		printf("Triangle is Equilateral");
	}
	else if(a==b || a==c || b==c)
	{
		printf("Triangle is Isosceles");
	}
	else
	   printf("Triangle is Scalene");
	
}