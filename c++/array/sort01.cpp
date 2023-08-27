#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n) {

    int left = 0, right = n-1;

    while(left < right) {

        while(arr[left] == 0 && left < right )  {
            left++;
        }

        while(arr[right]==1 && left < right){
            right--;
        }

        //agar yha pohoch gye ho, iska matlab
        //arr[left]==1 and arr[right]==0
        if(left<right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

}

int main() {

    int n;
    cout<<"Enter number of element in the array= ";
    cin>>n;
    int arr[n];

    cout<<"Fill the array with only two elements 0 and 1:-\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sortOne(arr, n);
    cout<<"Sorted Array:-\n";
    printArray(arr, n);

    return 0;
}