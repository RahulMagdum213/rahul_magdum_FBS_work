#include<stdio.h>
#include<string.h>



void main(){
	
	char str[10];
	printf("Enter a string: ");
	fgets(str,sizeof(str),stdin);
	
	//int len=strlen(str);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			str[i]='#';
		}
	}
	printf("%s",str);
}