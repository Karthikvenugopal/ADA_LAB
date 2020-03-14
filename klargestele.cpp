#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void sort(int a[], int n)
{
	int min, tmp;
	for(int i = 0;i<n-1;i++)
	{
		min = i;
		for (int j = i+1; j < n; j++)
		{
			if(a[min] > a[j]) min = j;
		}
		tmp = a[min];
		a[min] = a[i];
		a[i] = a[min];
	}
}
int main()
{
	int n, k;
	cout<<"Enter the size of the array and k"<<endl;
	cin>>n>>k;
	int a[n];
	for(int i = 0;i<n;i++)
	{
		a[i] = rand() % 100000;
	}
	int pt = clock();
	sort(a,n);
	for (int i = n-1; i > n-1-k ; i--)
	{
		cout<<a[i]<<endl;
	}
	pt = clock() - pt;
	cout<<"Process time: "<<(float)pt/CLOCKS_PER_SEC<<endl;
}