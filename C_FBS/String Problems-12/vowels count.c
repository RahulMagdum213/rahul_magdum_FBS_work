#include<stdio.h>

void main(){
	char ch[10]="hello";
	int count=0;
	
	for(int i=0; ch[i]!='\0';i++){
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'){
			count++;
		}
	}
	printf("total vowels are %d",count);
}