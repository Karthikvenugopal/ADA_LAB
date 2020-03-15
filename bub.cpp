#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	int n,tmp;
	cout<<"Enter the number of elements in an array"<<endl;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++)
		a[i] = rand()%1000;
	int pt = clock();
	for (int i = 0; i < n-1; i++)
	{
		for(int j = 0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	pt = clock() - pt;
	cout<<"Sorted"<<endl;
	for (int i = 0; i < n-1; i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"Process time is: "<<(float)pt/CLOCKS_PER_SEC<<endl;
}