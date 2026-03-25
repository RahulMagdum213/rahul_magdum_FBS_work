# include <stdio.h>

void main(){
	
	int arr[5];
	
	printf("Enter elements: ");
	
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	
	printf("Reversed Array:");
	
	for(int i=4;i>=0;i--){
	
		printf("%d ",arr[i]);
	}
	
}