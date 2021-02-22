#include<iostream>

using namespace std;

int main()
{
	//How To Print True & Flase In C++(CPP) Instead Of 0 & 1
	// #Noob's Logic
	int num, num1;
	bool a;
	
	cout<<"Enter 1st Number\n";
	cin>>num;
	cout<<"Enter 2nd Number\n";
	cin>>num1;
	
	a = num == num1;
	
	if(a==0)
	{
		cout<<"False";
	}
	else
	{
		cout<<"True";
	}
	
	
	return 0;
}
