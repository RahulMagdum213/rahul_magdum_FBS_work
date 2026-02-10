#include<stdio.h>

int isPalindrome(int);
void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	isPalindrome(n) ? printf("Palindrome") : printf("Not palindrome");
	
}
int isPalindrome(int no){
	
	int rem,rev=0;
	int i=no;

	while(no>0){
		rem = no%10;
		rev=rev*10+rem;
		no=no/10;	
	}
	
	return (i==rev);
}