#include<stdio.h>
#include<string.h>

void main(){
	char str[20];
	int len=0;
	int flag=0;
	
	scanf("%s",str);
	

	
	while(str[len]!='\0'){
		len++;
	}
	
	for(int i=0;i<len/2;i++){
		if(str[i]!=str[len-1-i]){
			flag=1;
			break;
		}
	}
	(flag==0)?printf("Palendrom"):printf("not Palendrom");
}