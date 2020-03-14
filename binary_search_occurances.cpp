#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int first(int a[], int f, int l, int key)
{
	int mid = (f+l)/2;
	if(key == a[mid])
	{
		if (a[mid-1] == key)
			return first(a, f, mid-1, key);
		return mid;
	}
	else if (key < a[mid])
		return first(a, f, mid-1, key);
	else
		return first(a, mid+1, l,key);
	return -1;
}
int last(int a[], int f, int l, int key)
{
	int mid = (f+l)/2;
	if(key == a[mid])
	{
		if (a[mid+1] == key)
			return last(a, mid+1, l, key);
		return mid;
	}
	else if (key < a[mid])
		return last(a, f, mid-1, key);
	else
		return last(a, mid+1, l,key);
	return -1;
}
int main()
{
	int a[1000], n, key;
	cout<<"Enter the number of elements in the array"<<endl;
	cin>>n>>key;
	for(int i = 0;i<n;i++)
		cin>>a[i];
	int pt=clock();
	int f = first(a, 0,n-1, key);
	int l = last(a, 0,n-1, key);
	pt=clock()-pt;
	cout<<"First occurance: "<<f<<"\nLast occurance: "<<l<<"\nNumber of occurances: "<<(l-f+1);
	cout<<"\nthe process time is :"<<(float)pt/CLOCKS_PER_SEC<<"\n";
}