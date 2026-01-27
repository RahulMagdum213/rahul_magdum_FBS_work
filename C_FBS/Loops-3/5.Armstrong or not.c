#include<stdio.h>

void main()
{
	int no,rem,sum=0;
	printf("Emter s number: ");
	scanf("%d",&no);
	int orgno=no;
	
	while(no>0){
		rem=no%10;
		sum=sum+rem*rem*rem;
		no=no/10;
	}
	if(sum==orgno){
		printf("Armstrong");
	}
	else{
		printf("Not Armstrong");
	}
}