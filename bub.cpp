#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void bub(int n)
{
	int tmp;
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
	cout<<endl;
	// for (int i = 0; i < n-1; i++)
	// {
	// 	cout<<a[i]<<endl;
	// }
	cout<<"Sorted "<<n<<" elements:"<<(float)pt/CLOCKS_PER_SEC<<endl;
}
int main()
{
	bub(10);
	bub(100);
	bub(1000);
	bub(10000);
	bub(100000);
}