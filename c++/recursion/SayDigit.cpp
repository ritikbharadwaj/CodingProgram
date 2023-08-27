#include<iostream>
using namespace std;
void SayDigit(int n,string arr[]) {
    if (n==0) {
        return ;
    }
    
    int digit = n%10;
    n = n/10;

    SayDigit(n,arr);

    cout<<arr[digit]<<" ";
    
}

int main() {

    int n=0;
    cout<<"Enter the number = ";
    cin>>n;
    string arr[10] = {"Zero","One","Two","Three","Four",
                      "Five","Six","Seven","Eight","Nine"};

    SayDigit(n, arr);

    return 0;
}