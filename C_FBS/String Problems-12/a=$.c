#include<stdio.h>

void main(){
	
	char ch[15]="allu arjun";
	
	for(int i=0;ch[i]!='\0';i++){
		if(ch[i]=='a'){
			printf("$");
		}
		else{
			printf("%c",ch[i]);
		}
	}
	 
}