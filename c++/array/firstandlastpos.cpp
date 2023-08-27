#include<iostream>
using namespace std;
int firstOccu(int arr[], int n, int K){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = 0;
    while (s<=e){
        if (arr[mid] == K){
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > K){
            e = mid - 1;
        }
        else if(arr[mid] < K){
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastOccu(int arr[], int n, int K){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e){
        if (arr[mid] == K){
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > K){
            e = mid - 1;
        }
        else if(arr[mid] < K){
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    int n=0;
    cout<<"Enter the size of array = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in sorted way:-"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int K = 0;
    cout<<"Enter the element who's first and last position you want to find =";
    cin>>K;
    int m = firstOccu(arr, n, K);
    int p = lastOccu(arr, n, K);
    cout<<"The first position is = "<<m<<endl;
    cout<<"The last position is = "<<p<<endl;
    return 0;
}