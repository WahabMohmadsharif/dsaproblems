#include<iostream>


using namespace std;
/*
 * Write a program to rotate array
 * 
 * */
void rotate_array(int *arr, int n)
{
	//define for loop with index to iterate array values one by one
	for(int i=0,j=n-1;i<j;i++,j--)
	{
	//swap first and last index value till first index is lower than last index
	int	tmp=arr[i];
		arr[i]=arr[j];
		arr[j]=tmp;		
	}
	
}	

	int main()
{
	//define array with five variables
	int arr[]={5,2,1,4,7};
	//define variable get the size of an array and store it in variable
	int size=sizeof(arr)/sizeof(arr[0]);
	rotate_array(arr,size);
	//print array
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
}
