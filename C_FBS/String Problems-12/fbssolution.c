#include<stdio.h>

void main(){
	
	char str[15]="fbssolutions";
	

	for(int i=0;str[i]!='\0';i++){
		
		if(str[i]=='s'){
			str[i]='*';	
		}
		//else{
		//	printf("%c",str[i]);
		//}
		
	}
	printf("%s",str);   
}