#include<stdio.h>

void addition();
void main()
{
	addition();
}
void addition(){
		int no1,no2,sum;
		printf("Enter two numbers: ");
		scanf("%d%d",&no1,&no2);
		sum=no1+no2;
		printf("%d",sum);
		
	}