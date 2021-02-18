#include <iostream>

using namespace std;

int main()
{
	int num,num1;
	
	cout<<"Swapping Of Two Numbers\n";
	
	cout<<"Enter 1st Number: \n";
	cin>>num;
	cout<<"Enter 2nd Number: \n";
	cin>>num1;
	
	cout<<"1st Number Is: "<<num<<"\n2nd Number Is: "<<num1;
	//Swapping Logic

	//Store num * num1 value In num	
	num=num*num1;
	
	//Swap num In num1
	num1= num/num1;
	
	//Swap num1 In num
	num= num/num1;
	
	cout<<"\n\nSwapped Numbers Are As Follow: "<<num<<" & "<<num1;
	
	return 0;
}
