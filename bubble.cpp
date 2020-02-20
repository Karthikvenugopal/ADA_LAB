#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int a[1000],n=100;
    // cout<<"Enter length of array and elements\n";
    // cin>>n;
    for(int i=0;i<n;i++)
        // cin>>a[i];
        a[i] = rand()%n;
    const clock_t begin_time = clock();
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    cout<<"Sorted is :";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\nTime:\n";
    cout<<(float(clock()-begin_time)/CLOCKS_PER_SEC)*1000<<" ms";
    return 0;
}