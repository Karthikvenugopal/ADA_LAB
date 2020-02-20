#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int a[1000], n = 100;
    for(int i = 0;i<n;i++)
        a[i] = rand()%n;
    const clock_t bt = clock();
    for(int i = 0; i<n-1;i++)
    {
        int small = i;
        for(int j = i+1;j<n;j++)
        if(a[j]<= a[small])
        {
            small = j;
        }
        int t = a[small];
        a[small] = a[i];
        a[i] = t;
    }
    float t = float(clock()-bt)/CLOCKS_PER_SEC*1000;
    cout<<"Sorted :";
    for(int i = 0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<t<<"ms";
}