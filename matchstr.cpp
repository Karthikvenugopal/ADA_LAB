#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
int match(string str1, string str2)
{
	int n = str1.length();
	int m = str2.length();
	int j;
	for (int i = 0; i < n-m; i++)
	{
		j = 0;
		while(j<m && str2[j] == str1[i+j])
		{
			j = j + 1;
		}
		if(j == m) return i;
	}
	return -1;
}
int main()
{
	string str1, str2;
	cout<<"Enter two strings"<<endl;
	getline(cin, str1);
	getline(cin, str2);
	cout<<match(str1, str2);
}