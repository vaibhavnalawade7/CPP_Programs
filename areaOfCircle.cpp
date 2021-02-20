#include<iostream>

using namespace std;

int main()
{
	//Delaration Of Variables r, area, pi
	long double r,area;
	const double pi=3.14;
	
	cout<<"Find Area Of Circle\n\n";
	
	//Accepting Inputs
	cout<<"Enter Radius Of Circle\n";
	cin>>r;
	
	//Logic Of Finding Area Of Circle
	area = pi * (r * r);
	
	//Printing Results
	cout<<"Area Of Circle Is: "<<area;
	
	return 0;
}
