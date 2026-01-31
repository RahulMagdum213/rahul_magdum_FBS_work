#include<stdio.h>

void main(){
	
	for(int i=1;i<=100;i++){
	
	int no=i;
	
	int i =2,flag=0;
	while(i<=no/2){
		if(no%i==0){
			flag=1;
			break;
		}
		i++;
	}

	if(flag==0){
		printf("%d\n",no);
		
	}
}
}
