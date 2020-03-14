#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int linear(int a[], int pos, int n, int key)
{
	if(pos == n-1 && a[pos] != key) return -1;
	if(a[pos] == key) return pos;
	return linear(a, pos+1, n, key);
}
int main()
{
	int n,key;
	cout<<"Enter the number of elements in the array"<<endl;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++)
		cin>>a[i];
	cin>>key;
	int pt = clock();
	cout<<"Found at position "<<linear(a,0,n,key)<<endl;
	pt = clock()-pt;
	cout<<"Process time: "<<(float)pt/CLOCKS_PER_SEC<<endl;

}