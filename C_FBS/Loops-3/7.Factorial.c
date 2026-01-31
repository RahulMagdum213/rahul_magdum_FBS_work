#include<stdio.h>

void main()
{
	int no;
	printf("Emter a number: ");
	scanf("%d",&no);
	int a=1,mul=1;
	
	while(a<=no){
		mul=mul*a;
		
		a++;
		
		
	}
	printf("%d!=%d",no,mul);	
}