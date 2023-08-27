#include<iostream>
using namespace std;
int main(){
    int a = 5;
    // we use address of operator => & for see the address of the variable
    cout<<"Address of a is = "<<&a<<endl;

    int b = 5;
    int *ptr = &b;
    cout<<"ptr = "<<ptr<<endl;
    cout<<"*ptr = "<<*ptr<<endl;

    // int *ptrr = NULL;
    // cout<<"*ptrr = "<<*ptrr<<endl;// when will you insert the NULL value in the pointer it will show the segmentation fault
    return 0;
}