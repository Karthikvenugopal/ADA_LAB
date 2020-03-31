#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void swap(int * a, int * b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int partitions(int arr[], int low, int high)
{
	int i = low - 1;
	int pivot = arr[high];
	for (int j = low; j < high; ++j)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return (i+1);
}
void quickSort(int arr[], int low, int high)
{
	if(low < high)
	{
		int pi = partitions(arr, low, high);
		quickSort(arr, low, pi -1);
		quickSort(arr, pi+1, high);
	}
}
int main()
{
	int n;
	cout<<"N: ";
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		arr[i] = rand() % 1000;
	}
	int pt = clock();
	quickSort(arr, 0, n-1);
	pt = clock() - pt;
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<arr[i]<<endl;
	// }
	cout<<"Time :"<<(float)pt/CLOCKS_PER_SEC<<endl;
}