#include<stdio.h>

void main()
{
	int stno,endno;
	int sum=0;
	printf("Enter numbers from to till u want sum: ");
	scanf("%d%d",&stno,&endno);
	
	while(stno<=endno)
	{
		sum=sum+stno;
		stno++;	
	}
	printf("%d",sum);
}
