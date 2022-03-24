#include<iostream>

using namespace std;

void clear_range(int*n,int start,int end)
{
	int m1= 1<<start -1;	
	int m2= (-1)<<(end+1);														
	int mask=m1 | m2;
	*n= *n & mask;
}

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
	int n,m,i,j;
	i=0;
	j=5;

	cout<<"enter the number"<<endl;
	cin>>n;
	cout<<"Enter the second number to be replaced in the first number as substring"<<endl;
	cin>>m;

	print_binaries(&n);	
	clear_range(&n,i,j);
	m=m<<i;
	n=n|m;
	print_binaries(&n);	
}
