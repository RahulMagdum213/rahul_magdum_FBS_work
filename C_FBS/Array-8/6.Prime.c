#include<stdio.h>

void main()
{
	int arr[5];
	printf("Enter array elements:\n");
	
	for(int i = 0 ; i < 5 ; i++ ){
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<5;i++){
		int flag=0;
		
		if(arr[i]>1){
		
		int j =2;
		while(j<arr[i]){
			if(arr[i]%j==0){
				flag=1;
				break;
			}
		
		j++;
		}
		
		
		
		if(flag==0){
		printf("%d ",arr[i]);
	}
    } 
	}
}