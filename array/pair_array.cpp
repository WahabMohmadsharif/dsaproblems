#include<iostream>

using namespace std;


void print_pair(int *array, int size)
{
	//iterate array in double nested for loop
	int i,j;
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		cout<<"("<<array[i]<<","<<array[j]<<")"<<endl;
	}
	//print of every combination of the value
}
int main()
{
	//Define array and initialize with value
	int array[]={1,2,3,4,5};
	//store the size of an array in variable
	int size = sizeof(array)/sizeof(array[0]);
	print_pair(array,size);
}
