#include<stdio.h>

void isprime(int arr[],int size){
	
	for(int i=0;i<size;i++){
		int flag=0;
		int n=arr[i]%10;
		
		//if(n<=1){
		//	continue;
	//	}
		if(n==2||n==3||n==5||n==7){
			printf("%d ",arr[i]);
		}
		//for(int j=2;j<n;j++){
			
			//if(n%2==0){
			//	flag=1;
				//break;
		//	}
		//}
		
		//if(flag==0){
		//	printf("%d ",arr[i]);
	//	}
	
	}
}

void main(){
	int arr[10]={34,24,24,23,56,3,758,3242,7,17};
	isprime(arr,10);
}