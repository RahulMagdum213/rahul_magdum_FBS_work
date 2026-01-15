#include<stdio.h>

void main()
{
	double salary;
	int basic;
	printf("Enter basic: ");
	scanf("%d",&basic);
	int da,ta,hra;
	
	if(basic<=5000)
	{
		da= basic*0.10;
		ta= basic*0.20;
		hra= basic*0.25;
	}
	else
	{
		da= basic*0.15;
		ta= basic*0.25;
		hra= basic*0.30;
	}
	salary = basic+da+ta+hra;
	printf("Salary : %.2f",salary);
}