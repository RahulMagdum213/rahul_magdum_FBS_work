#include<stdio.h>
#include<string.h>



void main(){
	
	char str[100];
	int count=0;
	printf("Enter a string: ");
	fgets(str,sizeof(str),stdin);
	
	//int len=strlen(str);
	for(int i=0;str[i]!='\0';i++){
		
	    if((i==0 && str[i] != ' ' && str[i] != '\n') ||
               (str[i] != ' ' && str[i-1] == ' ')){
            	count++;
        }
	
	}
	printf("%d",count);
} 