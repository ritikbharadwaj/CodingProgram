#include<stdio.h>
#include<curses.h>
int binarysearch(int arr[], int n, int key){
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

int main()
{
    int arr[100],n;
    printf("enter the space in the array u want= ");
    scanf("%d",&n);
    // int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
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
    printf("Sorted array:-\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    int key=0;
    printf("\n Enter the key u want to search= ");
    scanf("%d",&key);
    int found = binarysearch(arr, n, key);
    if (found == -1)
    {
        printf("Element not found");
    }
    else{
        printf("element is present at index= %d",found);
    }
    return 0;
}