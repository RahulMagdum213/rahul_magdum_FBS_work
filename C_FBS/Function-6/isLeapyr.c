#include<stdio.h>

int isLeapyr(int);
void main(){
	
	int n;
	printf("Enter a Year: ");
	scanf("%d",&n);
	isLeapyr(n) ? printf("Leap Year") : printf("Not a Leap year");
}

int isLeapyr(int no){
	
	return (no%4==0 && no%100!=0) || (no%400==0);

}