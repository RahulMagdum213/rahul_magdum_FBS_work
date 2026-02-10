#include<stdio.h>
int Sum(int,int);
int Mul(int,int);
void main()
{
	int no1,no2,result;
	
	printf("Enter two numbers: ");
	scanf("%d%d",&no1,&no2);
	Sum(no1,no2);
	
	result = Sum(no1, no2);
    printf("Sum = %d\n", result);
    
    result = Mul(no1, no2);
    printf("Mul = %d", result);

}

int Sum(int a ,int b){
	return a+b;
}
int Mul(int a ,int b){
	return a*b;
}