#include<iostream>
#include<climits>
using namespace std;

	int max(int a,int b)
{
	return a>b?a:b;
}

	int main()
{
	int array[]={5,3,-6,1};
	int size=sizeof(array)/sizeof(array[0]);
	//initialize curent value with 0 and maximum till now with-infinity
	int current=0;
	int max_till_now=INT_MIN;

	//oop from 0th index to end of array
	for(int i=0;i<size;i++)
	{
		//update current with maximum value out of two options
		//if current index value is larger than sum of current and current index then only update with current
		current=max(array[i],array[i]+current);

		//if current value is larger than max till now then update max till now
		if(current>max_till_now)
		{
			max_till_now=current;
		}
			
	}

	cout<<max_till_now<<endl;
}

