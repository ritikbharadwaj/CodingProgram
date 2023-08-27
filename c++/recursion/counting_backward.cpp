#include<iostream>
using namespace std;
int CountBack(int n){

    if (n == 0) {
        return 1;
    }
    
    cout<<n<<endl;

    return CountBack(n-1);
}
int main(){
    
    int n=0;
    cout<<"Enter the number = ";
    cin>>n;

    CountBack(n);

    return 0;
}