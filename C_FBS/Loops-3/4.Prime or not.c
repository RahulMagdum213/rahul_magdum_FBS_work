#include<stdio.h>

void main()
{
	int no;
	printf("Enter a number: ");
	scanf("%d",&no);
	int a=2,flag=0;
	
	while(a<no)
	{
		if(no%a==0)
		{
			flag=1;
			break;	
		}
		a++;
    }
	(flag==1) ? printf("Not prime") : printf("prime");
	
}
