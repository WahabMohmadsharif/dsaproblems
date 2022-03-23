#include<iostream>

using namespace std;

int get_bit(int n,int i)
{
	return (n>>i)&1;
}

int main()
{
	int num,bit;
	cout<<"enter the number"<<endl;
	cin>>num;
	cout<<"enter the bit to be returned"<<endl;
	cin>>bit;

	cout<<get_bit(num,bit)<<endl;
}
