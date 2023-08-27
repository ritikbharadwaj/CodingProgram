#include<iostream>
using namespace std;
bool findNumber(int arr[100][100],int target,int row,int col){
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (arr[i][j]==target)
                {
                    return 1;
                }
                
            }
        }
        return 0;
}
int main()
{

    int arr[100][100],row,col;

    cout<<"enter the number of rows and columns"<<endl;
    
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

    int target=0;

    cout<<"Enter the number you want to search in the array:-"<<endl;
    cin>>target;

    if(findNumber(arr,target,row,col))
    {
        cout<<"Element is found"<<endl;
    }
    else
    {
        cout<<"Element is not found"<<endl;
    }   
    
    return 0;
}