#include<stdio.h>
void Mystrlen(char*);
void main()
{
	char str1[]="FBS";
	Mystrlen(str1);
}

void Mystrlen(char* str){
	int count=0;
	int i=0;
	while(str[i]!=0){
		count++;
		i++;
	}
	printf("Length of string:%d",count);
}