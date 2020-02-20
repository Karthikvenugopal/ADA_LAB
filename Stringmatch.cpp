#include<iostream>
using namespace std;
int match(string ms, string ss)
{
int n=ms.length(), m=ss.length();
for (int i=0; i<=n-m;i++)
{ int j;
for(j=0; j<m;j++)
{
if(ms[i+j]!=ss[j])
break;
}
if(j==m)
return i;
}
return -1;
}
int main()
{
string ms,ss;
getline(cin, ms);
getline(cin, ss);
const clock_t bt = clock();
cout<<match(ms,ss)+1;
float t = float(clock()-bt)/(CLOCKS_PER_SEC/1000);
cout<<"\nTime: "<<t<<" ms";
return 0;
}
