#include<stdio.h>
#include<conio.h>

int main()
{
	float a,l,b;
	
	printf("Find Area Of Rectangle\n");
	
	printf("Enter Length: \n");
	scanf("%f",&l);
	printf("Enter Breadth: \n");
	scanf("%f",&b);
	
	a=l*b; 
	
	printf("Area Of Rectangle is: %f\n",a);
	
	return 0;
}
