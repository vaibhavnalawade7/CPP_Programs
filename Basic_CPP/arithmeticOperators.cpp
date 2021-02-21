#include <iostream>

using namespace std;

int main()
{
	//Declaration Of Variables num, num1, sum, sub, div, mul, mod, i, d & int ch, a, b
	double num, num1, sum, sub, div, mul, i, d;
	int ch, mod, a, b;
	
	cout<<"All Arithmetic Operators\n\n";
	
	//Accepting Values
	cout<<"Enter 1st Number\n";
	cin>>num;
	cout<<"Enter 2nd Number\n";
	cin>>num1;
	
	//To Restart Menu
	switchcase:	
	
	//Switch Case Menu
	cout<<"\n\nAll Arithmetic Operator Menu\n\n";
	cout<<"\n1. + Arithmetic Operator\n";
	cout<<"2. - Arithmetic Operator\n";
	cout<<"3. * Arithmetic Operator\n";
	cout<<"4. / Arithmetic Operator\n";
	cout<<"5. ++ Arithmetic Operator\n";
	cout<<"6. -- Arithmetic Operator\n";
	cout<<"7. % Arithmetic Operator\n";
	cout<<"8. Exit\n\n";
	cout<<"Enter Your Choice\n";
	cin>>ch;
	
	switch (ch)
	{
		//+ Operator Logic
		case 1:
			sum = num + num1;
			cout<<"+ Is Addition Operators & Sum Is: "<<sum;
			goto switchcase;
			break;
		
		//- Operator Logic
		case 2:
			sub = num - num1;
			cout<<"- Is Substration Operators & Substraction Is: "<<sub;
			break;
			
		//* Operator Logic
		case 3:
			mul = num * num1;
			cout<<"* Is Multiplication Operators & Multipliaction Is: "<<mul;
			break;
		
		// / Operator Logic
		case 4:
			div = num / num1;
			cout<<"/ Is Division Operator & Division Is: "<<div;
			break;
				
		//++ Operator Logic
		case 5:
			i = num + num++;
			cout<<"++ Is Increament Operator & Increament In: "<<num<<" Is: "<<i;
			break;
			
		//-- Operator Logic
		case 6:
			d = num + num--;
			cout<<"-- Is Decreament Operator & Dcreament In: "<<num<<" Is: "<<d;
			break;
			
		//% Operator Logic
		case 7:
			mod = a % b;
			cout<<"% Is Modulas Operator & Modulas Is: "<<mod;
			break;
				
		//Exit Logic
		case 8:
			exit(0);
		//Default Result To Give Message To Enter Valid Inputs
		default:
			cout<<"Enter Valid Choice Valid Choice Are 1 to 8";
			break;
	}
	
	return 0;
}
