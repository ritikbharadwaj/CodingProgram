#include<iostream>
using namespace std;
int main()
{
    int a[100],n;
    cout<<"enter the number of elements you want in the array:- "<<endl;
    cin>>n;
    cout<<"enter "<<n<<" elements in array:-"<<endl;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for (int i = 1; i <= 5; i++)
    {
        sum=sum + a[i];
    }
    cout<<"sum of all elements ="<<sum<<endl;
    return 0;
}