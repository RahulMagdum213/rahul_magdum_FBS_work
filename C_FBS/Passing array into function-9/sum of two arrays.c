#include<stdio.h>

void sumofarray(int a[],int size1,int b[],int size2){
	
	int size3=(size1>size2)?size1:size2;
	int c[size3];
	
	printf("result: ");   
	for(int i=0;i<size3;i++){
		if(i<size1 && i<size2){
			c[i]=a[i]+b[i];
		}
		else if(i<size1){
			c[i]=a[i];
		}
		else{
			c[i]=b[i];
		}
		printf("%d ",c[i]);
		
	}
	
}

void main(){
	
	int size1,size2;
	scanf("%d%d",&size1,&size2);
	
	int arr1[size1];
	printf("Elements for array1: ");
	for (int i=0;i<size1;i++){
		scanf("%d",&arr1[i]);
	}
	int arr2[size2];
	printf("Elements for array2: ");
	for (int i=0;i<size2;i++){
		scanf("%d",&arr2[i]);
	}
	sumofarray(arr1,size1,arr2,size2);
}