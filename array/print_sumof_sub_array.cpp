#include<iostream>

using namespace std;
//logic
//1
//12
//123
//1234
//
//2
//23
//234
//
//3
//34
//
//4
	void print_subarray(int *array,int size)
{
	int lsum=0;
	for(int i=0;i<size;i++)
	{
		for(int j=i;j<size;j++)
		{
			int sum=0;
			for (int k=i;k<=j;k++)
			{	
				sum=array[k]+sum;
				cout<<array[k]<<" ";
			}

				if(lsum<sum)
					lsum=sum;
      
				cout<<"sum="<<sum<<endl;		
		}
	}
	cout<<"largest_sumof_subarray="<<lsum<<endl;	
}

	int main()
{
	//define and initialize the array
	int array[]={1,2,3,4};
	//store the size of array in variable
	int size= sizeof(array)/sizeof(array[0]);
	//write the logic to print all sub-arrays
	print_subarray(array,size);
}
