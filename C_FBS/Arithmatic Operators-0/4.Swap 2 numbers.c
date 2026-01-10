#include<stdio.h>

void main()
{
	int a,b,temp;
	a=1;
	b=2;
	printf("Before swap a=%d and b=%d \n",a,b);
	
	temp=a;
	a=b;
	b=temp;
	printf("After swap a=%d and b=%d",a,b);
	
}