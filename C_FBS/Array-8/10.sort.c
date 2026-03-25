# include <stdio.h>

void main(){
	
	int arr[5];
	
	printf("Enter elements: ");
	
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(arr[i]>arr[j]){
				
				int temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			
		}
	}
	
	printf("sorted array:");
	for(int i =0;i<5;i++){
		printf("%d ",arr[i]);
	}
}