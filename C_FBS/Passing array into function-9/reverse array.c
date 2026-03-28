#include<stdio.h>

void reversearray(int arr[],int size){
	
	for(int i=size-1;i>=0;i--){
		
		printf("%d ",arr[i]);
	}
}
	
void main(){
	
	int arr[5]={1,2,3,4,5};
	
	
	reversearray(arr,5);
	
	
}
