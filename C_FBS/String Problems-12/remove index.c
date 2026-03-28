#include<stdio.h>

void main(){
	char ch[15]="sdlugcvbaisjbv";
	int n=6;
	for(int i=0;ch[i]!=0;i++){
		if(i==n){
			continue;
		}
		else{
			printf("%c",ch[i]);
		}
	}
}