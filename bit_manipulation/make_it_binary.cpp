#include<iostream>

using namespace std;
void print_binaries(int *n)
{
	for(int i=31;i>=0;i--)
	{
		cout<<((*n>>i) & 1);
	}
	cout<<endl;
}

	int main()
{
	int num;
	cout<<"enter the number"<<endl;
	cin>>num;
	print_binaries(&num);	
}
