#include<stdio.h>

void main(){
	int a[5]={1,2,3,4,4};
	int b[3]={1,2,3};
	   
	int size = (5>3)?5:3;
	
	int c[size];
	for(int i=0;i<size;i++){
		if(i<5 && i<3){
			c[i]=a[i]+b[i];
		}
		else if(i<5){
			c[i]=a[i];
		}
		else{
			c[i]=b[i];
		}
	
	}
	
	printf("Addition of array:");
	
	for(int i=0;i<size;i++){
		printf("%d ",c[i]);
	}
	   
}