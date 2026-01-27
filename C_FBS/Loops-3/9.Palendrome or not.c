#include<stdio.h>

void main()
{
	int no,rem,rev=0;
	printf("Emter a number: ");
	scanf("%d",&no);
	int orgno=no;
	
	while(no>0){
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;	
	}
	if(orgno==rev){
		printf("Palendrome");
	}
	else{
		printf("Not a Palendrome");
	}
}