#include <iostream>
#include<ctime>
#include<cstdlib>
// #include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of elements in the array"<<endl;
	cin>>n;
	int a[n];
	for(int i = 0;i <n;i++)
		a[i] = rand()%10000;
	int min, tmp;
	int pt=clock();
	for(int i = 0; i<n-1;i++)
	{
		min = i;
		for(int j = i+1;j<n;j++)
		{
			if(a[j]<a[min]) min = j;
		}
		tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
	}
	pt=clock()-pt;
	cout<<"Sorted array"<<endl;
	for(int i = 0;i<n;i++)
		cout<<a[i]<<endl;
	cout<<"\nthe process time is :"<<(float)pt/CLOCKS_PER_SEC<<"\n";
}