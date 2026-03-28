#include<stdio.h>

void maxelearray(int arr[],int size){
	int max=arr[0];
	int index=0;
	
	for(int i=0;i<size;i++){
		
		if(arr[i]>max){
			max=arr[i];
			index=i;
		}
	}
	printf("%d is the maximum element at index :%d",max,index);
}
	
void main(){
	
	int arr[10]={1,2,3,35,87};
	
	maxelearray(arr,10);
	
}


