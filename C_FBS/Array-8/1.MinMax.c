#include<stdio.h>

void main()
{
	int arr[5];
	printf("Enter array elements:\n");
	int max,min;
	
	for(int i = 0 ; i < 5 ; i++ ){
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(int i=0;i<5;i++){
	
	
		if(max<arr[i]){
			max=arr[i];	
		}
		if(min>arr[i]){
	    	min=arr[i];	
		}
	}
	printf("Max:%d\n",max);	
	printf("Min:%d",min);
}