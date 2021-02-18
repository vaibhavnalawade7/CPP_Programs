#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	float num,mul,ans;
	cout<<"Multiplication Of Two Numbers\n";
	
	cout<<"Enter 1st Number: \n";
	cin>>num;
	cout<<"Enter 2nd Number: \n";
	cin>>mul; 
	
	ans=num*mul;
	
	cout<<"Multiplication Of "<<num<<" & "<<mul<<" Is: "<<ans;
	
	return 0;
}
