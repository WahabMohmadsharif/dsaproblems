#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

/*write a function rotates the array by d element*/
//work is still in progress to build logic

void shifter(int *p)
{
	int i;
	for(i=0;i<5;i++)
	{
		p[i]=p[i+1];
	}	
}
void rotate_array(int *p,int d)
{
	int i;
	for(i=0;i<d;i++)
	shifter(p);			 
	cout<<endl;
}

int main(int argc, char** argv) {
	
	int a[]={1,2,3,4,5};
	rotate_array(a,2);
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
