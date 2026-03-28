#include<stdio.h>

void main(){
    
    int n;
    printf("sum of prime till: ");
    scanf("%d", &n);

    int sum = 0;

    for(int i=0;i<=n;i++){
        if(i<=1){
        	continue;  
		}
        int flag = 0;
        for(int j=2;j<i;j++){
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        if(flag==0){
        	printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("\nSum of prime numbers = %d", sum);
}