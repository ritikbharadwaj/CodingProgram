#include<iostream>
using namespace std;
int main(){
    int arr[100][100],row,col;

    cout<<"Enter the number of rows and columns"<<endl;
    cin>>row>>col;
    
    cout<<"start entering "<<row*col<<" numbers:-"<<endl;
    
    //fill the array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
    }

    //print the array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}