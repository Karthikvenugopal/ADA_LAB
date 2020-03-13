#include <iostream>
using namespace std;
int gcd(int m, int n)
{
	if(n==0) return m;
	int rem = m%n;
	m = n;
	n = rem;
	return gcd(m,n);
}
int main()
{
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	cout<<"GCD = "<<gcd(a, b);
}