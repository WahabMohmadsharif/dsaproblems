#include<iostream>
using namespace std;
	
	int count_bits(int *n)
	{
		int count=0,i;
		
		for(i=31;i>=0;i--)
		{
			(*n>>i)&1?count++:count;
		}	
		return count;
	}
	
	int main()
{
	int num;
	
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	cout<<count_bits(&num)<<endl;

}
