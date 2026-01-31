#include<stdio.h>

void main()
{
	for(int a=1;a<=1000;a++){
	int no=a;
	int sum=0;
	
	
	int i = 1;
	while(i<no){
		if(no%i==0){
		
			sum=sum+i;
			
		}
		i++;
	}
	if(sum==a){
		printf("%d ",a);
	}
    }
	
}