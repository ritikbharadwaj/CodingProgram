#include<iostream>
using namespace std;
int main(){
    char arr[6] = "abcde";
    char *c = &arr[0];
    cout<<c<<endl;
    cout<<*c<<endl;


    char temp = 'z';
    char *p = &temp;
    cout<<p<<endl;
    
    return 0;
}