#include<iostream>
using namespace std;
int main()
{
    int a[5],n;
    cout<<"enter the elemments of array"<<endl;
    for (int i = 1; i <= 5; i++)
    {
        cin>>a[i];
    }
    int max=0,min;
    for (int i = 1; i <= 5; i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
        
    }
    for (int i = 1; i <= 5; i++)
    {
        if (min>a[i])
        {
            min=a[i];
        }
    }
    
    cout<<"max = "<<max<<endl<<"min = "<<min<<endl;

    return 0;
    
}