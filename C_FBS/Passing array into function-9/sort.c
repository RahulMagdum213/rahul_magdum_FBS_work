#include<stdio.h>

void sort(int arr[],int size){
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(arr[i]<arr[j]){
				
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}	
		}
	}
	
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}

}

void main(){
	int arr[10]={34,24,24,23,56,3,758,3242,7,17};
	sort(arr,10);
}