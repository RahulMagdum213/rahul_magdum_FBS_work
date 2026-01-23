#include<stdio.h>

void main()
{
	int n;
	int a=1;
	printf("Enter a number whos table you want: ");
	scanf("%d",&n);
	while(a<=10)
	{
		printf("%d ",n*a);
		a++; 
	}
}