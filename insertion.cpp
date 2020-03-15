#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++)
		a[i] = rand()%1000;
	int pt = clock();
	int j, key;
	for(int i = 1;i<n;i++)
	{
		key = a[i];
		j = i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1] = a[j];
			j = j - 1;
		}
		a[j+1] = key;
	}
	pt = clock() - pt;
	for(int i = 0;i<n;i++)
		cout<<a[i]<<endl;
	cout<<"Process time: "<<(float)pt/CLOCKS_PER_SEC<<endl;
}