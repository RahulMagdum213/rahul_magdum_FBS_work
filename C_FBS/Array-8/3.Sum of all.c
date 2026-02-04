#include<stdio.h>
void main()
{
	int arr[5];
	int sum=0;
	printf("Enter no in arrays:\n");
	for(int i=0;i<5;i++){

		scanf("%d",&arr[i]);
	}
	
	for (int i=0;i<5;i++){
		sum=sum+arr[i];
	}
	printf("sum is: %d\n",sum);
}