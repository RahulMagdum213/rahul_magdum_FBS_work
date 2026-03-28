#include<stdio.h>
#include<string.h>


void main(){
	
	char str[10];
	printf("Enter a string: ");
//	scanf("%s",str);
	fgets(str,sizeof(str),stdin);

	
	for(int i=0;str[i]!='\0';i+=2){
		
		printf("%c ",str[i]);
	
    }
       
}