#include<iostream>
using namespace std;
int main(){
    int a[100], n;
    cout<<"enter the size= ";
    cin>>n;
    cout<<"enter "<<n<<" numbers= ";
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    int xorr = 0; 
    for (int i = 1; i <= n; i++)
    {
        xorr = xorr ^ a[i];
    }
    cout<<"unique element= "<<xorr;
    return 0;
}