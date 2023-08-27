#include<iostream>
using namespace std;
int removeDuplicates(int nums[], int n) {
        int i=0;
        for(int j=1; j<n; j++) {
                if(nums[i] != nums[j]) {
                    i++;
                    nums[i] = nums[j];
                }
                for (int i = 0; i < n; i++) {
                    cout<< nums[i]<<" ";
                }
            cout<<endl;
        }
    return i+1;
}
int main(){
    int n=0;
    cout<<"Enter the size of array = ";
    cin>>n;
    int nums[n];
    cout<<"Enter the elements in the array = ";
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    int a = removeDuplicates(nums,n);
    cout<<"Number of unique elements in the array = "<<a<<endl;
    cout<<"After removing duplicate elements new array is :-"<<endl;
    for (int i = 0; i < a; i++)
    {
        cout<< nums[i]<<" ";
    }
    return 0;
    
}