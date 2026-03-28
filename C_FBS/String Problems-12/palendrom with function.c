#include<stdio.h>
#include<string.h>

void main(){
	char str[20];
	char rev[20];
	
	scanf("%s",str);
	
	strcpy(rev,str);
	
	strrev(rev);
	 
	if(strcmp(str,rev)==0){
		printf("Palendrom");
		
	}
	else{
		printf("Not palendrom");
	}
}