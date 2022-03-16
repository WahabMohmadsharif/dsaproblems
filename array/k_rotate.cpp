#include<iostream>

	using namespace std;

	void shift(int *array,int size)
	{
		int temp=array[0];
		int i;
		for(i=0;i<size-1;i++)
		{
			array[i]=array[i+1];		
		}
		array[i]=temp;
	}
	
	void k_rotate(int *array,int size, int n)
	{
		for(int i=0;i<n;i++)
			shift(array,size);
	}
	void print_array(int *array,int size)
	{
		for(int i=0;i<size;i++)
		{
			cout<<array[i]<<"\t";
		}
		cout<<endl;
	}
	int main()
{
	int array[]={3,2,5,1,6,4};
	int size=sizeof(array)/sizeof(array[0]);
	
	k_rotate(array,size,3);
	print_array(array,size);

}
