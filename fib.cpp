#include <iostream>
using namespace std;
int fib(int x)
{
   if((x<=1)
      return(x);
   else 
      return(fib(x-1)+fib(x-2));
}
int main()
{
   int x;
   cout<<"Enter the term of the fibonacci series to be printed:";
   cin>>x;
   cout<<"Term is "<<fib(i);
   return 0;
}
