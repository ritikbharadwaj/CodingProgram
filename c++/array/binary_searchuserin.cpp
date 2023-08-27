#include<iostream>
using namespace std;
int binarysearch(int arr[],int key,int n){
      int s = 0;
      int e = n-1;
      
      int mid = (s+e)/2;

      while (s <= e)
      {
        if (arr[mid] == key)
        {
            return mid;
        }
        
        if (arr[mid]< key)
        {
            s= mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = (s+e)/2;
        
      }
      return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array in sorted order = ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int temp=0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    cout<<"Sorted Array:- "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
    int key = 0;
    cout<<"Enter the key you want to search = ";
    cin>>key;
    int a = binarysearch(arr, key, n);
    if(a == -1){
        cout<<"The element is not found"<<endl;
    }
    else{
        cout<<"The element is present in the array on index "<<a<<endl;
    }
    return 0;
}