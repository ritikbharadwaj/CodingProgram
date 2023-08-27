#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int start= 0;
    int end= n-1;
    while (start<=end){
        // swap(arr[start], arr[end]);by using inbuilt function
        int temp = 0;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;//by using code
        start++;
        end--;
    }
    
}
int main(){
    int arr[100], n;
    cout<<"enter the size of array=  ";
    cin>>n;
    cout<<"enter "<<n<<" number of elements in array= ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    reverse(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
