#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a=0;
    int b=1;
    for ( i = 1; i < n; i++)
    {
        int newnum = a+b;
        cout<<newnum<<" ";
        a=b;
        b=newnum;
    }
    return 0;
}