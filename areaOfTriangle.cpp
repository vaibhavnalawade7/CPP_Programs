#include<iostream>

using namespace std;

int main()
{
	//Declaration Variables
	double h,b,area;
	
	cout<<"Find Area Of Triangle\n\n";
	
	//Accepting Inputs
	cout<<"Enter Heigth\n";
	cin>>h;
	cout<<"Enter Base Length\n";
	cin>>b;
	
	//Logic Of Finding Area Of Triangle
	area =(0.5)* (h * b);
	
	//Printing Results
	cout<<"\nArea Triangle Is: "<<area;
	
	return 0;
}
