#include<iostream>
using namespace std;
int binsf(int arr[10],int beg,int las,int key)
{
        int mid = (beg+las)/2;
        if(key == arr[mid])
        {
            if(arr[mid-1] == key)
                return binsf(arr, beg, mid-1,key);
            return mid;
        }
        else if(key < arr[mid])
            return binsf(arr, beg, mid-1, key);
        else
            return binsf(arr, mid+1, las, key);
    return -1;
}
int binsl(int arr[10],int beg,int las,int key)
{
        int mid = (beg+las)/2;
        if(key == arr[mid])
        {
            if(arr[mid+1] == key)
                return binsl(arr, mid+1, las, key);
            return mid;
        }
        else if(key < arr[mid])
            return binsl(arr, beg, mid-1, key);
        else
            return binsl(arr, mid+1, las, key);
    return -1;
}
int main()
{
    int arr[10], n, key;
    cout<<"Enter the number of elements and the elements of the array and the element to be searched\n";
    cin>>n;
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    cin>>key;
    int beg = 0;
    int las = n-1;
    int f,e;
    f = binsf(arr, beg,las, key);
    e = binsl(arr, beg, las, key);
    cout<<"First Occurance: "<<f<<"\nSecond occurance: "<<e<<"\nCount: "<<e-f+1<<"\n";
}