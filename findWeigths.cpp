#include<iostream>

using namespace std;

int main()
{
  //Declaration Of Veriables double num, total, conv;
  double num, total, conv;
  
  cout<<"Find Weights Of Any Number\n\n";
  
  //Accepting Inputs
  cout<<"Enter Number To Find Weight\n";
  cin>>num;
  cout<<"Enter Toatl Number\n";
  cin>>total;
  cout<<"Enter Number To COnvert\n";
  cin>>conv;
  
  //Logic
  conv = (num / total)*conv;
  
  //Printing Results
  cout<<"Weights Is: "<<conv;
}
