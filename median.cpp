#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2,m;
	cout<<"N1: ";
	cin>>n1;
	cout<<"N2: ";
	cin>>n2;
	int a1[n1], a2[n2];
	for (int i = 0; i < n1; i++)
	{
		cin>>a1[i];
	}
	for (int i = 0; i < n2; i++)
	{
		cin>>a2[i];
	}
	sort(a1, a1 + n1);
	sort(a2, a2 + n2);
	vector<int> k;
	int i = 0, j = 0;
	while(i<n1 && j<n2)
	{
		if(a1[i] <= a2[j])
		{
			k.push_back(a1[i]);
			i++;
		}
		else
		{
			k.push_back(a2[j]);
			j++;
		}
	}
	cout<<"Median : "<<k[k.size()/2]; 

}