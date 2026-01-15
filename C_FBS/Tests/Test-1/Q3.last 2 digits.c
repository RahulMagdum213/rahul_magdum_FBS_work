#include<stdio.h>

void main()
{
	int no,last2;
	printf("Enter a number: ");
	scanf("%d",&no);
	
	last2 = no%100;
	printf("Last two digits of %d are %d",no,last2);
	
	 
}