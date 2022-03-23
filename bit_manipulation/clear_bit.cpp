#include<iostream>

using namespace std;

void clear_bit(int *n,int i)
{
	*n= *n & ~(1<<i);
}

int main()
{
	int num,bit;
	cout<<"enter the number"<<endl;
	cin>>num;
	cout<<"enter the bit number to be cleared"<<endl;
	cin>>bit;

	clear_bit(&num,bit);
	//print the number after setting the bit
	cout<<num<<endl;
}
