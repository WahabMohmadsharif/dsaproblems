#include<iostream>
using namespace std;

	void last_ibits(int *n , int i)
	{
		*n=*n&(-1<<i);
	}

	int main()
	{
		int num,bit;
		cout<<"Enter the number"<<endl;
		cin>>num;
		cout<<"Enter the bit number"<<endl;
		cin>>bit;
		last_ibits(&num,bit);

		cout<<"num="<<num<<endl;		
	}
