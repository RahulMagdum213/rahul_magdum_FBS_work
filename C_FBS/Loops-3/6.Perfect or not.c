#include<stdio.h>

void main()
{
	int no,sum=0;
	printf("Emter a number: ");
	scanf("%d",&no);
	int a=1;
	
	while(a<no){
		
		if(no%a==0){
			sum=sum+a;
		}
	a++;
	}
	
	if(no==sum){
		printf("Perfect");
	}
	else{
		printf("Not Perfect");
	}
}