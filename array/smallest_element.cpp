#include<iostream>
#include<climits>
using namespace std;

	int smallest_element(int *p,int size)
	{
		int small=INT_MAX;

		for(int i=0;i<size;i++)
		{
			if(p[i]<small)
			small=p[i];	
		}
	return small;
	}
	int main()
{
	int array[]={5,3,1,2,7,0,-11};
	int size=sizeof(array)/sizeof(array[0]);
	
	cout<<smallest_element(array,size)<<endl;
}

