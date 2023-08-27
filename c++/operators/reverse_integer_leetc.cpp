#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
   int n;
   int ans=0;
   cin>>n;
   while(n!=0)
   {
      //macros are defined in the header file <limits.h>
      if ((ans > INT_MAX/10) || (ans < INT_MIN/10))
      {
         cout<<"0";
         break;
      }
      else
      {
    int digit = n%10;
    ans = (ans * 10) + digit;
    n = n/10;
      }
   }
   cout<<ans;
   return 0;
}