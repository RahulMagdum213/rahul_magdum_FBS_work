#include<stdio.h>

void main(){
	for(int i = 1; i<=1000;i++){
		
		int no=i,rem,sum=0;
	
	    int orgno=no;
	
	    while(no>0){
	    	rem=no%10;
     		sum=sum+rem*rem*rem;
	    	no=no/10;
	    }
	if(sum==orgno){
		printf("%d\n",orgno);
	}

	}


}        