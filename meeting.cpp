#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
	return (a.second < b.second);
}
int main()
{
	vector<pair<int, int> > k, z;
	int n;
	cout<<"N: ";
	cin>>n;
	int a,b;
	for (int i = 0; i < n; i++)
	{
		cin>>a>>b;
		k.push_back(make_pair(a,b));
	}
	sort(k.begin(), k.end(), sortbysec);
	z.push_back(k[0]);
	for (int i = 1; i < n; ++i)
	{
		if(k[i].first >= z.back().second)
			z.push_back(k[i]);
	}
	cout<<z.size();
	cout<<"Sort"<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<k[i].first<<" "<<k[i].second<<endl;
	}

}