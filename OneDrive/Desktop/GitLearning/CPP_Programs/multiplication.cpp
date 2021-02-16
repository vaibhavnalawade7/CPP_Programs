#include<stdio.h>
#include<conio.h>

int main()
{

	int num,mul,ans;
	
	printf("Multiplication Of Two Numbers\n");
	
	
	printf("Enter 1st Number: \n");
	scanf("%d",&num);
	printf("Enter 2nd Number: \n");
	scanf("%d",&mul);
	
	ans=num*mul;
	
	printf("Munltiplication Of %d & %d is: %d",num, mul, ans);
	return 0;
}
