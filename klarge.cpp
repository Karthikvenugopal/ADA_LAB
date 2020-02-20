#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int k;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
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
    
    
    for(int i = n-1;i>n-k-1;i--)
        cout<<a[i]<<" ";
    cout<<t<<"ms";
    return 1;
}