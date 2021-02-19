#include<iostream>

using namespace std;

int main()
{
	//Declaration OF Variables i,num
	int i,num;
	
	cout<<"While Loop Logic\n\n";
	
	//Accepting Inputs
	cout<<"Enter Any Number\n";
	cin>>num;
	
	//doWhile Loop Logic
	//In do Section Provide Logic Or Any Message
	do
	{
		
		cout<<"This Is While Loop\n";
		
		//Increating i until we dose not get num
		i++;
	}
	//Conddition When To Break Loop
	while(i<num);
	
	//Printing Results
	cout<<"\nWhile Loop Is Used "<<num<<" Times";
	
	return 0;
}
