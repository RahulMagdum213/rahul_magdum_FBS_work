#include<stdio.h>

void main()
{
	int hh,mm,sec;
	printf("Enter hourse minutes and seconds(Separated by space): ");
	scanf("%d%d%d",&hh,&mm,&sec);
	
	int htos,mtos,tot;
	htos=hh*3600;
	mtos=mm*60;
	
	tot = htos+mtos+sec;
	
	printf("The time %dhrs %dmin %dsec is %dseconds",hh,mm,sec,tot);
}