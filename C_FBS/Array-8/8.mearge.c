#include<stdio.h>

void main(){
	int a[5]={1,2,3,4,4};
	int b[3]={1,2,3};
	int d[6]={21,23,2,4,4,3};  
	int size = 5+3+6;
	
	int c[size];
	for(int i=0;i<5;i++){
	
			c[i]=a[i];
	}
	for(int i=0;i<3;i++){
	
			c[5+i]=b[i];
	}
	for(int i=0;i<6;i++){
	
			c[5+3+i]=d[i];
	} 
	
	
	printf("merged array:");
	
	for(int i=0;i<size;i++){
		
		printf("%d ",c[i]);
	}
	   
}