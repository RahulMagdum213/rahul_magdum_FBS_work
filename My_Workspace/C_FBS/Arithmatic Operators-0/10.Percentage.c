#include<stdio.h>

void main()
{
	//percentage = obtained marks / total marks *100
	int sci,math,his,mar,eng,obt,tot;
	float per;
	tot=500;
	sci=92;
	mar=90;
	eng=93;
	math=90;
	his=89;
	obt=sci+math+his+mar+eng;
	per=obt*100/tot;
	printf("Percentage is %.2f",per);
	
}