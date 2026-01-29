#include<stdio.h>

void main()
{
	int a,z;
	int sum=0;
	printf("Enter numbers from to till u want sum: ");
	scanf("%d%d",&a,&z);
	
	while(a<=z)
	{
		sum=sum+a;
		a++;	
	}
	printf("%d",sum);
}
