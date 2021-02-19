#include <iostream>

using namespace std;

int main()
{
	//Declration Of Variables num, sub, ans
	float num,sub,ans;
	
	cout<<"Subtraction Calculater\n";
	
	//Accepting Inputs
	cout<<"Enter 1st Number: \n";
	cin>>num;
	cout<<"Enter 2nd Number\n";
	cin>>sub;
	
	//Substraction Logic
	ans = num - sub;
	
	//Printing Results
	cout<<"Substration Of "<<num<<" & "<<sub<<" Is "<<ans;
	
	return 0;
}
