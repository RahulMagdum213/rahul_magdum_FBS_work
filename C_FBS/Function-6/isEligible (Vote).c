#include<stdio.h>

int isEligible(int);
void main(){
	
	int n;
	printf("Enter a Age: ");
	scanf("%d",&n);
	isEligible(n) ? printf("Yes eligible for voting") : printf("Not eligible for voting");
}

int isEligible(int no){
	
	return (no>=18);

}