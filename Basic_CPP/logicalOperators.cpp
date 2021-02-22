#include<iostream>

using namespace std;

int main()
{
	//Declaration Of Veriables int ch, num, num1, bool a
	
	int ch, num, num1;
	bool a;
	
	cout<<"Logical Operators\n\n";
	
	//Accepting Inputs
	cout<<"Enter 1st Number\n";
	cin>>num;
	cout<<"Enter 2nd Number\n";
	cin>>num1;
	
	//Switch Case Menu
	cout<<"Menu\n";
	cout<<"1. && Logical Operator\n";
	cout<<"2. || Logical Operator\n";
	cout<<"3. ! Logical Operator\n";
	cout<<"4. Exit\n";
	cout<<"Enter Your Choicce\n";
	cin>>ch;
	
	//Swich Case Logic
	switch(ch)
	{
		//&& Logic
		case 1:
			a = num && num1;
			if(a == 0)
			{
				cout<<"True, '&& Is Logical AND Operator'";
			}
			else
			{
				cout<<"False, && Is Logical AND Operator";
			}
			break;
		
		//|| Logic
		case 2:
			a = num || num1;
			if(a || 0)
			{
				cout<<"True, '|| Is Logical OR Operator'";
			}
			else
			{
				cout<<"False, || Is Logical OR Operator";
			}
			break;
		//! Logic
		case 3:
			a = !(num && num1);
			if(a == 0)
			{
				cout<<"True, '! Is Logical NOT Operator'";
			}
			else
			{
				cout<<"False, ! Is Logical NOT Operator";
			}
			break;
		
		//Exit Logic
		case 4:
			exit(0);
	}	
	
	return 0;
}
