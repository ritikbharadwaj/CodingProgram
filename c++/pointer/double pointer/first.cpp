#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int *ptr1 = &a;
    cout<<"*ptr1 = "<<*ptr1<<endl;
    // double pointer
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    cout<<"ptr4 = "<<ptr4<<endl;
    cout<<"****ptr4 = "<<****ptr4<<endl;
    cout<<"&ptr1 = "<<&ptr1<<endl;
    return 0;
}