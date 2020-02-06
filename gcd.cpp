#include<iostream>
using namespace std;
int gcd(int m, int n)
{
    if(n == 0)
    {
        return m;
    }
    return gcd(n, m%n);
}
int main()
{
    cout<<"Enter two numbers\n";
    int m,n;
    cin>>m>>n;
    cout<<"GCD of the two numbers is "<<gcd(m,n)<<"\n";
}