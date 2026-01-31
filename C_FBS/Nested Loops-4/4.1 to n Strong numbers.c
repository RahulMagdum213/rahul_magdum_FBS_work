#include<stdio.h>

void main(){
	
	for(int i=1;i<=1000;i++){
	    int no=i;
	    int sum=0,rem;
	    
	
	    while(no>0){
		    rem=no%10;
		    int mul=1,a=1;
		    
		while(a<=rem){
			mul=mul*a;
			
			a++;
		}
		sum=sum+mul;
		no=no/10;
	    }
    
	    if (sum==i){
		    printf("%d ",sum);
	    }
    }
}

