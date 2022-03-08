#include<iostream>

using namespace std;

	int linear_search(int array[],int user_input,int size)
	{
	//define a loop to iterate through the array till the index is reached to end of array
	for(int i=0;i<size;i++)
	{	
	//compare inside the loop if value entered by user is equal to value of current index
		if(user_input==array[i])
		{
			//if both value same the print output with key found
			cout<<"key found!!!"<<user_input<<endl;
			return 0;
		}
	}
	//if both value are not same and array reached to the end of the index then print output saying not found and exit the function.
	cout<<"key not found"<<endl;
	return -1;
	}
int main()
{
	//define a variable to store input from user
	int user_input;
	//define array and initialize with values
	int array[]={5,2,1,6,3};
	//define a variable to store the size of an array
	int size=sizeof(array)/sizeof(array[0]);
	//get the input from the user in variable defined for user
	cout<<"enter the value to search\n"<<endl;
	cin>>user_input;
	linear_search(array,user_input,size);
}
