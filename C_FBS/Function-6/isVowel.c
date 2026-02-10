#include<stdio.h>

void isVowel(char);
void main(){
	
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	isVowel(ch);
	
}

void isVowel(char ch){
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
		printf("Its a vowel");
		
	}
	else{
		printf("Consonent");
	}

}