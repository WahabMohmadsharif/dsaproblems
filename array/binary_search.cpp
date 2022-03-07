#include<iostream>

using namespace std;

	
	int binary_search(int *array,int l, int r, int user_input)
	{
	int mid_index;
	//iterate through the loop till l is not greater than right
	while(l<=r)
	{
		//search for middle index
		mid_index=l+(r-l)/2;
		//check if user_input is present at mid
		if (array[mid_index] == user_input)
		{	
			cout<<"bingo found it!!!==="<<user_input<<endl;
			return 0;
		}
		//if  user input is greater than ignore left half
		if(array[mid_index]<user_input)
			l=mid_index+1;
		else
			r=mid_index-1;
		//if user input is smaller, ignore the right half
	}
	cout<<"not found!!"<<endl;
	return -1;
	}

	int main()
{
	//define array with initialization
	int array[]={1,5,7,9,11};

	//define variable to store input from the user
	int user_input;

	//define variable to store the size of an array
	int size=sizeof(array)/sizeof(array[0]);

	//define variable to store left right index
	int l=0,r=size-1;
	
	//get the input from the user and store it in variable
	cout<<"enter the value"<<endl;
	cin>>user_input;
	binary_search(array,l,r,user_input);
}
