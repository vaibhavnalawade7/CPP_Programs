#include<iostream>

using namespace std;

int main()
{
	//Declaration Of Variables double num, num1, int ch, bool a
	double num, num1;
	int ch;
	bool a;
	
	cout<<"All Comparison Operators\n\n";
	
	//Accepting Inputs
	cout<<"Enter 1st Number\n";
	cin>>num;
	cout<<"Enter 2nd Number\n";
	cin>>num1;
	
	//Swich Case Menu
	cout<<"1. == Comparison Operator\n";
	cout<<"2. != Comparison Operator\n";
	cout<<"3. > Comparison Operator\n";
	cout<<"4. < Comparison Operator\n";
	cout<<"5. >= Comparison Operator\n";
	cout<<"6. <= Comparison Operator\n";
	cout<<"7. Exit\n";
	cout<<"Enter Your Choice\n";
	cin>>ch;
	
	//Noob's Swich Case Logic
	switch(ch)
	{
		//== Lgoic
		case 1:
			a = num == num1;
			if(a==0)
			{
				cout<<"False, This '== Equal TO' Operator";
			}
			else
			{
				cout<<"True, This '== Equal TO' Operator";
			}
			break;
		
		// != Logic
		case 2:
			a = num != num1;
			if(a==0)
			{
				cout<<"False, This '!= Not Equal To' Operator";
			}
			else
			{
				cout<<"True, This '!= Not Equal To' Operator";
			}
			break;
		// > Logic
		case 3:
			a = num > num1;
			if(a==0)
			{
				cout<<"False, This '> Greater Than' Operator";
			}
			else
			{
				cout<<"True, This '> Greater Than' Operator";
			}
			break;
		
		//< Logic
		case 4:
			a = num < num1;
			if(a==0)
			{
				cout<<"False, This '< Less Than' Operator";
			}
			else
			{
				cout<<"True, This '< Less Than' Operator";
			}
			break;
		
		//>= Logic
		case 5:
			a = num >= num1;
			if(a==0)
			{
				cout<<"False, This '>= Greater Than Equal To' Operator";
			}
			else
			{
				cout<<"True, This '>= Greater Than Equal To' Operator";
			}
			break;
			
		//<= Logic
		case 6:
			a = num <= num1;
			if(a==0)
			{
				cout<<"False, This '<= Less Than Equal To' Operator";
			}
			else
			{
				cout<<"True, This '<= Less Than Equal To' Operator";
			}
			break;
		
		//Exit Logic
		case 7:
			exit(0);
			
		//Default Logic
		default:
			cout<<"Enter Valid Choice Between 1 to 7\n";
	}
	
	return 0;
}
