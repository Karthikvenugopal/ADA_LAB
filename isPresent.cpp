#include <iostream>
using namespace std;
int main()
{
	int n, k, t, a[1000];
	cout<<"Enter the number of test cases"<<endl;
	cin>>t;
	for(int i = 0;i<t;i++)
	{
		cin>>n>>k;
		int flag = -1;
		for(int j = 0;j<n;j++)
		{
			cin>>a[j];
		}
		int f = 0, l = n-1;
		while(f<=l)
		{
			int mid = (f+l)/2;
			if (a[mid] == k)
			 {
			 	cout<<mid<<endl;
			 	flag = mid;
			 	break;
			 }
			 else if(a[mid] < k)
			 {
			 	f = mid+1;
			 }
			 else
			 {
			 	l = mid-1;
			 }
		}
		if (flag == -1)
		{
			cout<<flag<<endl;
		}
	}
}