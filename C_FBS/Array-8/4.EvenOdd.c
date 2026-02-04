#include<stdio.h>

void main()
{
	int arr[5];
	printf("Enter array elements:\n");
	int max,min;
	
	for(int i = 0 ; i < 5 ; i++ ){
		scanf("%d",&arr[i]);
	}
	
    printf("Even numbers:\n");
	for(int i=0;i<5;i++){
		if(arr[i]%2==0){
			printf("%d ",arr[i]);
    	}
	}
	 printf("\n");

	printf("Odd numbers:\n");
	for(int i=0;i<5;i++){
		if(arr[i]%2!=0){
			printf("%d ",arr[i]);
    	}
	}

}