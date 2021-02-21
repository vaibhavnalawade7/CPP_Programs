#include<iostream>

using namespace std;

int main()
{
	//Declaration Variables i, f, d
	
	//int Is Used To Store Numbers Like 33, 4342, 331 etc. It Has 4 Bytes Size
	int	i;
	
	//float Is Used To Store Numbers Like 3.14, 4242.221, 422.1 etc. It Has 4 Bytes Size
	float f;
	
	//double Is Used To Store Numbers Has More Than 7 Decimal Points Like 3.14322112 etc. It Has 8 Bytes Size.
	double d;
	
	cout<<"Numeric Datatypes In C++";
	cout<<"'int' 'float' 'double'\n\n";
	
	//Accepting Inputs
	cout<<"Enter Any Number Like 3\n";
	cin>>i;
	cout<<"Enter Any Number Like 3.14\n";
	cin>>f;
	cout<<"Enter Any Number Like 3.14233232\n";
	cin>>d;
	
	//Printing Results
	cout<<"\n "<<i<<" Is 'int Data Type'\n";
	cout<<" "<<f<<" Is 'float' Data Type\n";
	cout<<" "<<d<<" Is 'double' Data Type";
	
	return 0;
}
