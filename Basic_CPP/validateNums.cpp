#include<iostream>
#include<limits.h>

using namespace std;

int main()
{
	//Declration Of Variables sq,ans
	double sq,ans;
	
	cout<<"Find Square Of Any Number\n\n";
	
	//Accepting Inputs
	cout<<"Enter Any Number\n";
	//cin>>sq;
	
	//Trying To Validate Inputs To Only Accept Numbers
	//Note: This Code Is Not Working If You Have Solution Of It Then Please Update It
	/*
	while(!(cin>>sq))
	{
	
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		
		cout<<"Invalid Input, Enter Valid Number";
		
	}
	*/
	
	//Logic Of Finding Square
	ans = sq * sq;
	
	//Printing Results
	cout<<"Square Of "<<sq<<" Is:2 "<<ans;
	
	return 0;
}
