#include<iostream>
#include<climits>
	using namespace std;	
	
	void print_array(int *array,int size)
	{
		for(int i=0;i<size;i++)
		{
			cout<<array[i]<<"\t";
		}
		cout<<endl;
	}

	int min_element(int *array,int index,int size)
	{
		int min=INT_MAX;
		int min_index;
		for(int i=index;i<size;i++)
		{
			if(min>array[i])
			{
				min=array[i];
				min_index=i;
			}
		}
		return min_index;
	}

	void selection_sort(int *array,int size)
	{
		int min;
		for(int i=1;i<size;i++)
		{
			min=min_element(array,i,size);
			if(array[i-1]> array[min])
			{
				swap(array[i-1],array[min]);
			}
		}

	}

int main()
{
	int array[]={5,7,3,2,8,1,9,6,4};
	int size=sizeof(array)/sizeof(array[0]);

	selection_sort(array,size);
	print_array(array,size);
}
