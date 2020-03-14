#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int factorial(int n)
{
	if (n==1) return 1;
	return n*factorial(n-1);
}
int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	int pt = clock();
	cout<<n<<"th fibonacci term is "<<factorial(n)<<endl;
	pt = clock() - pt;
	cout<<"Process time: "<<(float)pt/CLOCKS_PER_SEC;
}