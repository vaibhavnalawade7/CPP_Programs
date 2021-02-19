#include <iostream>

using namespace std;

int main()
{
	//Declration Of Variables i,num
	int i,num;
 
 	cout<<"How To Use For Loop\n\n";
 	
 	//Accepting Inputs
 	cout<<"How Many Times You Want To Print This Line\nEnter Number\n";
 	cin>>num;
 	
 	
 	//For Loop Logic
 	for(i=0;i<num;i++)
 	{
 		//This Line Will Be Printed num Time
		cout<<"How Many Times You Want To Print This Line\n";
	}
	
	//Printing Results
	cout<<"\nThis Line Was Printed "<<num<<" Times";
	
	return 0;
}
