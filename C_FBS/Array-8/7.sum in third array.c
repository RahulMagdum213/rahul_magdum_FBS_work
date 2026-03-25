#include<stdio.h>
void main()
{
	int s1,s2;
	printf("Enter the size for 1st array: ");
	scanf("%d",&s1);
	int a[s1];
	printf("Scan the numbers for 1st array: \n");
	
	for (int i=0;i<s1;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter the size for 2nd array: ");
	scanf("%d",&s2);
	int b[s2];
	
	printf("Scan the numbers for 2nd array: \n");
	
	for (int i=0;i<s2;i++){
		scanf("%d",&b[i]);
	}
	
	printf("Printing Arrays:\n");
	
	for (int i=0;i<s1;i++){
		printf("%d ",a[i]);
	}
	
	printf("\n");
	
	for (int i=0;i<s2;i++){
		printf("%d ",b[i]);
	}
	
	int max = s1>s2? s1:s2;
	int c3[max];
	
	for(int i=0;i<max;i++){
		if(i<s1 && i<s2){
			c3[i] = a[i]+b[i];
		}
		else if(i<s1){
			c3[i]=a[i];
		}
		else{
			c3[i]=b[i];
	    }
    }
	printf("\nThird array:");
	for(int i=0;i<max;i++){
		printf("%d ",c3[i]);
	}
	
}
