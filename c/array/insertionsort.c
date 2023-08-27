#include <stdio.h>

int insertionsort(int arr[], int n) 
{
    int i, j, key;
    for (i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
         for (int i = 0; i < n; i++)
                {   
                    printf("%d ",arr[i]); 
                }
            // printf("%d and %d",arr[i],arr[j+1]);
            printf("\n");
    }
    return 0;
}

int main() 
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    insertionsort(arr, n);
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}