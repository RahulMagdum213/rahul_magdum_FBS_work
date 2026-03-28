#include<stdio.h>
#include<string.h>



void main(){
	
	char str1[100];
	char str2[100];
	int count=0;
	printf("Enter a string: ");
	fgets(str1,sizeof(str1),stdin);
	printf("Enter a string: ");
	fgets(str2,sizeof(str2),stdin);
	int count1=0;
	int count2=0;
	//int len=strlen(str);
	while(str1[count1]!='\0'){
		count1++;
	}
	
	while(str2[count2]!='\0'){
		count2++;
	}
	(count1>count2)?printf("str1 is bigger"):printf("str2 is bigger");

} 