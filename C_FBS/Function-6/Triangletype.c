#include<stdio.h>

void Triangletype(int,int,int);
void main()
{
	int a,b,c;
	printf("Enter three sides of triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	Triangletype(a,b,c);
	
	
}
void Triangletype(int a,int b,int c){
	if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Not a valid triangle");
    }
    else
    {
        if (a == b && b == c)
            printf("Triangle is Equilateral");
        else if (a == b || a == c || b == c)
            printf("Triangle is Isosceles");
        else
            printf("Triangle is Scalene");
    }
}
	
