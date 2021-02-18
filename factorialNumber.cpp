#include<iostream>

using namespace std;

int main()
{
	int i,num;
	unsigned long int fact=1;
	
	cout<<"Find Factorial Of Any Number\n";
	
	cout<<"Enter Any Number: \n";
	cin>>num;
	
	//If User Enter Any Negative Number

	if(num<0)
	{
		cout<<num<<" Is Negative Number & Negative Number Dose Not Exist Factorial Number";	
	}
	
	else
	{
		//Using For Loop To Get User's Number
		for(i=1;i<=num;i++)
		{
			//num = 5
			//1 = 1 * 1, 1 = 1 * 2, 2 = 2 * 3, 6 = 6 * 4, 24 = 24 * 5 Factorial Is 120
			
			fact = fact * i;
		
		}
		
		cout<<"Factorial Of "<<num<<" Is: "<<fact;
	}
		
			
	
	
	return 0;
}
