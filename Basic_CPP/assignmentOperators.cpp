#include<iostream>

using namespace std;

int main()
{
	//Declaration Of Veriables double num, num1, int a, b, ch
	
	double num, num1;
	int a, b, ch;
	
	cout<<"All Assignment Operators\n\n";
	
	//Accepting Input
	cout<<"Enter Any Number\n";
	cin>>num;
	cout<<"Enter 2nd Number\n\n";
	cin>>num1;
	
	//Assigning double Values In int
	a = num;
	b = num1;
	
	//Switch Case Menu
	cout<<"1. += Assignment Operator\n";
	cout<<"2. -= Assignment Operator\n";
	cout<<"3. *= Assignment Operator\n";
	cout<<"4. /= Assignment Operator\n";
	cout<<"5. %= Assignment Operator\n";
	cout<<"6. Exit\n\n";
	cin>>ch;
	
	//Switch Cases
	switch(ch)
	{
		//All Logics
		//+= Logic
		case 1:
			num += num1;
			cout<<"+= Is Addition Assignment Operator & Ans Is: "<<num;
			break;
		
		//-= Logic
		case 2:
			num -= num1;
			cout<<"-= Is Substraction Assignment Operator & Ans Is: "<<num;
			break;
		
		//*= Logic
		case 3:
			num *=num1;
			cout<<"*= Is Munltiplication Assignment Operator & Ans Is: "<<num;
			break;
		
		// /= Logic
		case 4:
			num /= num1;
			cout<<"/= Is Division Assignement Operator & Ans Is: "<<num;
			break;
		
		//%= Logic
		case 5:
			a %= b;
			cout<<"%= Is MOdulaus Assignment Operator & Ans Is: "<<a;
			break;
			
		//Exit Logic
		case 6:
			exit(0);
	}
	
	return 0;
}
