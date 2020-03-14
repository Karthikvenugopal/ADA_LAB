#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int binary(int a[], int f, int r, int key)
{
	int mid = (f+r)/2;
	if (f == r && a[mid] != key) return -1;
	if (a[mid] == key) return mid;
	else if(a[mid] < key) return binary(a, mid+1, r, key);
	else return binary(a, f, mid-1, key);
}
int main()
{
	int n;
	cout<<"Enter the length of the array"<<endl;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++)
		cin>>a[i];
	int key;
	cin>>key;
	int pt = clock();
	cout<<"Found at "<<binary(a, 0, n-1, key)<<endl;
	pt = clock() - pt;
	cout<<"Process time: "<<(float)pt/CLOCKS_PER_SEC<<endl;
}