#include<iostream>
using namespace std;


//sub-sequnce is a sequnce that is generated from either string or list of numbers
//on feature of sub-sequnce is that it will contain combinations of numbers which will have deleted elements also in the sequnce if compared with binary numbers
//we can use analogy of binary numbers to decide condition to check if number has to be printed or not.
//we can use the size of the array to decide number of necessary combinations to be generated.

	void print_subsequnce(int *array,int size)
{
	//find the number combination of subsequnce generated
	int number_iteration=(1<<(size));

	//loop for generating number of combinations
	for(int i=1;i<number_iteration;i++)
	{
		//loop for generating numbers
		for (int j=0;j<size;j++)
		{
			//condition to decide the combination of sequnce to be printed based on binary to utilize delted number sequnce generation.
			if((i>>j)&1)
			cout<<array[j];
		}
		cout<<endl;
	}
}

	int main()
{
	//define an array with initialization
	int array[]={1,2,3};

	//find the size of an array
	int size=sizeof(array)/sizeof(array[0]);

	//call the logic for the subsequnce
	print_subsequnce(array,size);

}
