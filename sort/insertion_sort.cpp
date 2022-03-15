#include<iostream>

	using namespace std;

	//swaping function	
	void swap(int *p,int*q)
	{
		int temp;
		temp=*p;
		*p=*q;
		*q=temp;
	}

	void insertion_sort(int *p,int size)
{
	//outer loop for more number of time to iterate over array to sort all elements
	for(int j=0;j<size;j++)
	for(int i=1;i<size;i++)//inner loop starts with 1 as first key to compare with its predecessor for the swaping logic of insertion sort like deck of cards-- 
	{
		if(p[i]<p[i-1])//swaping with predecessor will happen if current key is less than previous one
		swap(p[i],p[i-1]);	
	}	
			

}

	int main()
{
	int array[]={5,3,4,7,2,8,6,9,1};
	int size=sizeof(array)/sizeof(array[0]);
	insertion_sort(array,size);
	//logic for printing the array
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<"\t";
	}
	cout<<endl;
}
