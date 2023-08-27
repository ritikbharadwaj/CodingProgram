#include<iostream>
using namespace std;
int removeElement(int nums[], int val, int n) {
    int i=0;
    for(int j=0; j<n; j++){
        if(val != nums[j]){
            nums[i] = nums[j];
            i++;
        }
        for(int i = 0; i < n; i++) {
            cout<< nums[i]<<" ";
            }
        cout<<endl;
    }
    return i;
}
int main(){
    int n=0,val=0;
    cout<<"Enter the size of array = ";
    cin>>n;
    int nums[n];
    cout<<"Enter the elements in the array = ";
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    cout<<"Enter the value to be removed from the array = ";
    cin>>val;
    int a = removeElement(nums, val, n);
    cout<<"After removing duplicate elements new array is :-"<<endl;
    for (int i = 0; i < a; i++)
    {
        cout<< nums[i]<<" ";
    }
    return 0;
    
}