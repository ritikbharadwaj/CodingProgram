#include<iostream>
using namespace std;
int selectionsort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {

            if (arr[j] < arr[minIndex])
                minIndex = j;

        }
        swap(arr[minIndex], arr[i]);
    }
    return 0;    
}
int main(){
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array = ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    selectionsort( arr, n);
    cout<<"Sorted array is:-"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
    
}