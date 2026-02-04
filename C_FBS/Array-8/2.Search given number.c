#include<stdio.h>

void main()
{
	int arr[5];
	int flag=0;
	printf("Enter array elements:\n");

	
	for(int i = 0 ; i < 5 ; i++ ){
		scanf("%d",&arr[i]);
	}
	int n;
	printf("enter number u wanted to check: ");
	scanf("%d",&n);

	for(int i=0;i<5;i++){
	//1	printf("%d ",arr[i]);
	
		if(arr[i]==n){
			printf("%d at index:%d",arr[i],i);
			flag=1;
			break;
		}   
		
	
	}
	if(flag==0){
		printf("Not found");
	}
	
}