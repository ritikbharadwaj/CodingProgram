#include<iostream>
using namespace std;
int fib(int n) {


    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fib(n-1) + fib(n-2);
    
}

int main() {

    int n=0,i=0;
    cout<<"Enter the number for series = ";
    cin>>n;

    cout<<"Series:-"<<endl;
    while (i < n) {
        cout<<" "<<fib(i);
        i++;
    }

    return 0;
}