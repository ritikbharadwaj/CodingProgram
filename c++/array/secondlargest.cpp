#include<iostream>
using namespace std;
  int print2largest(int arr[], int n) {
	    // code here
	    int l = arr[0];
	    int s = -1;
	    
	    for(int i=1; i<n; ++i) {
	        
	        if(l < arr[i]) {
	            s = l;
	            l = arr[i];
	        }
	    }
	    
	    return s;
}
int main(){
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout<<"The second largest number in the array is = "<<print2largest(arr, n);
    
    return 0;
}