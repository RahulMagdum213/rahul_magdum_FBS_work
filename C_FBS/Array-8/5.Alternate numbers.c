#include<stdio.h>

void main()
{
	int arr[5];
	printf("Enter array elements:\n");
	
	for(int i = 0 ; i < 5 ; i++ ){
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<5;i+=2){
		printf("%d ",arr[i]);
    }    
}