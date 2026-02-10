#include<stdio.h>

void isUpper(char);
void main(){
	
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	isUpper(ch);
	
}

void isUpper(char ch){
	if(ch>='A'&&ch<='Z'){
		printf("Upper");
		
	}
	else{
		printf("Lower");
	}
}

