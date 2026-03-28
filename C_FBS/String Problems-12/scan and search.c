//#include<stdio.h>

//void main(){
	
	//char str[10]="hello";
	//int length=0;
	
	//while(str[length] != '\0'){
	//	length++;
	//}
	//
//	printf("%d",length);
//}
#include<stdio.h>

void main(){
	
	char str[10];
	printf("Enter a string: ");
	scanf("%s",str);
	int found=0;
	char ch;
	printf("Enter character u want to search: ");
	scanf(" %c",&ch);
	
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==ch){
			printf("at %d index ",i);
			found=1;
		}
	}
	if(found==0){
		printf("Not found ");
	}

}