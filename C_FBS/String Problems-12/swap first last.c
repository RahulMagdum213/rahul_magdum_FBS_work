#include<stdio.h>
#include<string.h>

void main(){
	char ch[10]="hello";
	
	int len=strlen(ch);
	
	//swap
	char temp=ch[0];
	ch[0]=ch[len-1];
	ch[len-1]=temp;
	
	printf("New str= %s",ch);
}