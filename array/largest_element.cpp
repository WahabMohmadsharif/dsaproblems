#include<iostream>
#include<climits>
using namespace std;

	int largest_element(int *p,int size)
	{
		int large=INT_MIN;

		for(int i=0;i<size;i++)
		{
			if(p[i]>large)
			large=p[i];	
		}
	return large;
	}
	int main()
{
	int array[]={5,3,1,2,7,1,11};
	int size=sizeof(array)/sizeof(array[0]);
	
	cout<<largest_element(array,size)<<endl;
}

