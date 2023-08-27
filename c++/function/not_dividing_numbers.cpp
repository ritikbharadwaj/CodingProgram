#include<iostream>
using namespace std;
bool isPrime(int n){

     if (n<=1)
        {
            return 0;
        }
    for (int i = 2; i < n; i++)
    {
       if (n%i==0)
       {
            return 0;
       }
    }
    return 1;
}
int countPrime(int n){
    int cnt=0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            cnt++;
        }
        
    }
    cout<<n<<" have "<<cnt<<" numbers which don't divide it"<<endl;
    return 0;
}
int main(){
    int n=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    countPrime(n);
    return 0;
}