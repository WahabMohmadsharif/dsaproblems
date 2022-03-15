#include<iostream>


using namespace std;

	//function to swap the elements of array
	void swap(int *p,int*q)
	{
		int temp;
		temp=*p;
		*p=*q;
		*q=temp;
	}
	
	//sorting of elements acoording to bubble sort
	//outer loop always start with 1 and inner loop starts with zero
	//number of iteration of outer loop required will be size of array-1
	//number elements upto which we have to iterate in innerloop will decrease with each element getting sorted due to swap after each iteration
	//largest element moves to end of the array and after sorting is done smallest element moves to the start of the array if its increasing array.
	void bubble_sort(int *p,int size)
	{
		for(int j=1;j<size;j++)
		for(int i=0;i<size-j;i++)
		{
		
			if(p[i]>p[i+1])
			{
				swap(p[i],p[i+1]);
			}
		}
	}

	int main()
{
	//defining an array
	int array[]={10,12,5,4,1,3,2};
	//size of an array to pass to sorting function
	int size=sizeof(array)/sizeof(array[0]);
	//sorting an array
	bubble_sort(array,size);	

	//printing an array
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<"\t";
	}
	cout<<endl;
}
