#include<iostream>
using namespace std;
int sumRow(int arr[100][100],int row,int col)
{
     for (int i = 1; i <= row; i++)
        {
            int sum = 0;
            for (int j = 1; j <= col; j++)
            {
                sum = sum + arr[i][j];
            }
            cout<<endl<<"sum of rows "<<i<<":-"<<endl<<sum;
        }
        return 0;
}
int maxSumrow(int arr[100][100],int row,int col)
{
    int rowIndex = 0;
    int maxi = 0;
        for (int i = 1; i <= row; i++)
        {
            int sum = 0;
            for (int j = 1; j <= col; j++)
            {
                sum = sum + arr[i][j];
            }
            if (maxi < sum)
            {
                maxi = sum;
                rowIndex = i;
            }
        }
        cout<<"\nmaximum sum is of row = "<<rowIndex<<endl;
        cout<<"sum is :-\n"<<maxi<<endl;
        return 0;
}
int sumCol(int arr[100][100],int row,int col)
{
     for (int j = 1; j <= row; j++)
        {
            int sum = 0;
            for (int i = 1; i <= col; i++)
            {
                sum = sum + arr[i][j];
            }
            cout<<endl<<"sum of col "<<j<<":-"<<endl<<sum;
        }
        return 0;
}
int maxSumcol(int arr[100][100],int row,int col)
{
    int colIndex = 0;
    int maxi = 0;
        for (int j = 1; j <= row; j++)
        {
            int sum = 0;
            for (int i = 1; i <= col; i++)
            {
                sum = sum + arr[i][j];
            }
            if (maxi < sum)
            {
                maxi = sum;
                colIndex = j;
            }
        }
        cout<<"\nmaximum sum is of col = "<<colIndex<<endl;
        cout<<"sum is :-\n"<<maxi<<endl;
        return 0;
}
int main()
{
    int arr[100][100],row,col;

    cout<<"enter the number of rows and columns"<<endl;
    cin>>row>>col;

    cout<<"start entering "<<row*col<<" numbers:-"<<endl;

    //fill the array
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cin>>arr[i][j];
        }
    }

    //print the array
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    sumRow(arr, row, col);
    sumCol(arr, row, col);
    maxSumrow(arr, row, col);
    maxSumcol(arr, row, col);
    return 0;
}