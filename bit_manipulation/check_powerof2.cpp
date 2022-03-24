#include<iostream>

using namespace std;

int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	if((num&(num-1)) == 0)
	{
		cout<<"its power of two"<<endl;
	}
	else
	{
		cout<<"its not power of two"<<endl;
	}
}
