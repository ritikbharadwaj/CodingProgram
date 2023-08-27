#include<iostream>
using namespace std;
int binarysearch(int arr[], int sizeofarray, int key){

    int start= 1;
    int end = sizeofarray;
    // int mid = start + (end - start) / 2; //chalaki test case se bachne ko int ki range(2^31-1) se bahar na jaaye 
    int mid = (start+end)/2;
    // simple for simple solution

    while(start<=end){
        if (arr[mid] == key)
        {
            return mid;
        }
        //goto right part when key is greater
        if(key > arr[mid]){
            start = mid + 1;
        }
        //go to left part when key is smaller
        else{
            end = mid -1; 
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main(){
    int even[6]= {2,4,6,8,12,16};
    int odd[5]= {3, 8, 11, 14, 16};

    int evenindex = binarysearch(even , 6, 12);

    cout<<"index of 12 is "<<evenindex<<endl;

    int oddindex = binarysearch(odd, 5, 8);

    cout<<"index of 8 is "<<oddindex<<endl;
    return 0;
}