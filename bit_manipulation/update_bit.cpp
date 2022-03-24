#include<iostream>

using namespace std;

void clear_bit(int *n,int i)
{
	*n= *n & ~(1<<i);
}
void set_bit(int *n,int i)
{
	*n= *n | (1<<i);
}

void update_bit(int *n,int i,int val)
{
	clear_bit(n,i);
	if(val)
	set_bit(n,i);
}

int main()
{
	int num,bit,val;
	cout<<"enter the number"<<endl;
	cin>>num;
	cout<<"enter the bit number to be updated"<<endl;
	cin>>bit;
	cout<<"enter the value to be updated"<<endl;
	cin>>val;

	update_bit(&num,bit,val);
	//print the number after setting the bit
	cout<<num<<endl;
}
