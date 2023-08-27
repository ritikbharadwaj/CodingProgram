#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int temp=0;
    for (int i = 1; i <= n ; i+=2){
        if(i < n){
        // swap(arr[i], arr[i + 1]);
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        }
    }
}
int main(){
    int arr[100], n;
    cout<<"enter the size of array=  ";
    cin>>n;
    cout<<"enter "<<n<<" number of elements in array= ";
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }
    
    reverse(arr, n);
    for (int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
