#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sort012(int arr[], int n)
{
   int low = 0, mid = 0, high = n-1;

   while(mid <= high){
      if(arr[mid] == 0){
         swap(arr[mid],arr[low]);
         low++;
         mid++;
      }
      else if(arr[mid] == 1){
         mid++;
      }
      else{
         swap(arr[mid],arr[high]);
         high--;
      }
   }
}

int main() {

    int n;
    cout<<"Enter number of element in the array= ";
    cin>>n;
    int arr[n];

    cout<<"Fill the array with only two elements 0,1 and 2:-\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sort012(arr, n);
    cout<<"Sorted Array:-\n";
    printArray(arr, n);

    return 0;
}