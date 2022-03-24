#include<iostream>
using namespace std;

	int main()
{
	int num;
	cout<<"Enter the value for checking<"<<endl;
	
	cin>>num;
	//do anding operation with LSB to check if number is odd or even
	if(num &1)
	cout<<"Its odd number"<<endl;
	else
	cout<<"Its even number"<<endl;
}
