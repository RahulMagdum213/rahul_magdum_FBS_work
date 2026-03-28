#include<stdio.h>

void main(){
	
	char str[100];
	
	printf("Enter elements for str: ");
	scanf("%s",str);
	
	char ch;
	printf("Enter char you want to change: ");
	scanf(" %c",&ch);

	
	for(int i=0;str[i]!=0;i++){ 
	
		if(str[i]== ch){
			str[i]='#';
		}
	
	}
	printf("%s",str);

}