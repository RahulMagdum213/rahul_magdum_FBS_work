#include<stdio.h>
#include<math.h>

void main()
{
	int no,rem,sum=0;
	printf("Emter s number: ");
	scanf("%d",&no);
	int orgno=no,count=0;
	int temp=no;
	
	while(temp>0){
		count++;
		temp=temp/10;
	}
	
	
	while(no>0){
		rem=no%10;
		sum=sum+pow(rem,count);
		no=no/10;
	}
	(sum==orgno)? printf("Armstrong") : printf("Not Armstrong");

}