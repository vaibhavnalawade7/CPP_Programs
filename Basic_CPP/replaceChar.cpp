#include<iostream>

using namespace std;

int main()
{
	//Declaration Of Veriables string name, int pos, char chng
	string name;
	char chng;
	int pos;
	
	cout<<"Replace Any Letter Or Position\n\n";
	
	//Accepting Input
	cout<<"Enter Name\n";
	cin>>name;
	
	//Printing Name 
	cout<<"Your Name Is: "<<name<<"\n\n";
	
	//Accepting Input For Change char
	cout<<"Which Position Do You Want To Change Enter Number\n\n";
	cin>>pos;
	cout<<"Enter Letter To Change\n";
	cin>>chng;
	
	//Changeing Position Of char By 1 To Start Count @ 1 To Avoid 0 Starting Position
	pos -= 1;
	
	//Replace char Logic
	name[pos] = chng;
	
	//Printing Results
	cout<<"Name Is: "<<name;
		
	return 0;
}
