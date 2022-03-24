#include<iostream>
using namespace std;


void clear_range(int*n,int start,int end)
{
	int m1= 1<<start -1;	
	int m2= (-1)<<(end+1);																								   int mask=m1 | m2;
	*n= *n & mask;
}


	int main()
{
	int num,start,end;
	cout<<"Enter the number"<<endl;
	cin>>num;
	cout<<"Enter the start bit for range"<<endl;
	cin>>start;
	cout<<"Enter the end bit for range"<<endl;
	cin>>end;

	clear_range(&num,start,end);
	cout<<"Number="<<num<<endl;
}
