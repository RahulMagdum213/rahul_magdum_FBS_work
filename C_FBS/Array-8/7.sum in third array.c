#include<stdio.h>
void main()
{
	int s1,s2;
	printf("Enter the size for 1st array: ");
	scanf("%d",&s1);
	int a[s1];
	
	for (int i=0;i<s1;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter the size for 2nd array: ");
	scanf("%d",&s2);
	int b[s2];
	
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
	arr3[max];
}