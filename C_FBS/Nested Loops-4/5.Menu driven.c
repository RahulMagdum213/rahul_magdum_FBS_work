#include<stdio.h>
void main()
{
	printf("Which activity you want to perform:\n1"
	"To check number is even or odd.\n"
	"2.To check number is prime or not.\n"
    "3.To check number is pallindrome or not.\n"
    "4.To check number is positive, negative or zero.\n"
    "5.To reverse a number.\n"
    "6.To find sum of digits.\n");
    
    int ch;
    printf("Enter your choice: ");
    scanf("%d",&ch);
    
    if(ch==1){
    	int no;
    	printf("Enter a number: ");
    	scanf("%d",&no);
    	no%2==0?printf("Even"):printf("Odd");
	}
	
	if(ch==2){
		int no;
		printf("Enter a number: ");
    	scanf("%d",&no);
    	int i=2,flag=0;
    	while(i<no){
    		if(no%i==0){
    			flag=1;
    			break;
			}
			i++;
		}
		flag==0 ? printf("Prime"): printf("Not Prime");
	}
	
	if(ch==3){
		int no,rem,rev=0;
		printf("Enter a number: ");
    	scanf("%d",&no);
    	int org=no;
    	while(no>0){
    		rem=no%10;
    		rev=rev*10+rem;
    		no=no/10;
		}
		org==rev ? printf("Palendrome") : printf("Not Palendrom");
	}
	if(ch==4){
		int no;
		printf("Enter a number: ");
    	scanf("%d",&no);
    	if(no>0){
    		printf("%d is Positive number",no);
		}
		else if(no<0){
			printf("%d is Negative number",no);
		}
		else{
			printf("Zero",no);
		}
	}
	
	if(ch==5){
		int no,rem,rev=0;
		printf("Enter a number: ");
    	scanf("%d",&no);
    	int org=no;
    	while(no>0){
    		rem=no%10;
    		rev=rev*10+rem;
    		no=no/10;
	    }
	    printf("%d in revers is:%d",org,rev);   
    }
    if(ch==6){
    	int no1,no2;
		printf("Enter two numbers: ");
    	scanf("%d%d",&no1,&no2);
    	printf("Sum of%d and %d is:%d",no1,no2,no1+no2);
	}
}