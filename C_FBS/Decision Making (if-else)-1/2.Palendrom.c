#include<stdio.h>

void main()
{
	int a = 404;
	
	int r1,r2,r3,temp,rev;
	r1=a%10;
	temp=a/10;
	r2=temp%10;
	r3=temp/10;
//	printf("%d%d%d\n",r1,r2,r3);
	
	rev = r1*100 + r2*10 + r3;
//	printf("%d",rev);
	
	
	if (a==rev)
	{
		printf("%d Its a Palendrom",a);
	}
	else
	{
		printf("%d Its not a Palendrom",a);
	}
	

}