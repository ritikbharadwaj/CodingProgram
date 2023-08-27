#include<iostream>
using namespace std;
int fact(int n){

    if (n == 0) {
        return 1;
    }

    //this code is to know the changes of the value while the factorial run
    int ans = n*fact(n-1);
    cout<<ans<<endl;

    return ans;
}
int main(){
    int n=0;
    cout<<"Enter the number = ";
    cin>>n;

    int ans = fact(n);

    cout<<"Factorial is = "<<ans;

    return 0;
}