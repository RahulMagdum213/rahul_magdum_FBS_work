#include<stdio.h>

void printarray(int arr[],int size){
	
	for(int i=0;i<size;i++){
		
		printf("%d ",arr[i]);
	}
}
	
void main(){
	
	int arr[10]={1,2,3,4,5,6,7};
	
	printarray(arr,10);
	
	
}


