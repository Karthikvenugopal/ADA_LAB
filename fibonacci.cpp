#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int fibonacci(int n)
{
	if (n<=1) return n;
	return (fibonacci(n-1)+fibonacci(n-2));
}
int main()
{
	int n;
	cout<<"Enter the member of the fibonacci series to be determined: ";
	cin>>n;
	int pt = clock();
	cout<<n<<"th fibonacci term is "<<fibonacci(n)<<endl;
	pt = clock() - pt;
	cout<<"Process time: "<<(float)pt/CLOCKS_PER_SEC;
}