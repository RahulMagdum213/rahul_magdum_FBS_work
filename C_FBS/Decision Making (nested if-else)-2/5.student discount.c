#include<stdio.h>

void main()
{
	int price,dis,tot;
	printf("Enter price: ");
	scanf("%d",&price);
	
	char is_stu;
	printf("Are you student?(y=yes,n=no): ");
	scanf(" %c",&is_stu);
	
	if(is_stu=='y')
	{
		if(price>=500)
		    dis=price*0.20;
		else
		    dis=price*0.20;		    
	}
	else
	{
		if(price>600)
		    dis=price*0.15;
		else
		    dis=0;
	}
	tot=price-dis;
	printf("You have to pay:%d ",tot);
}