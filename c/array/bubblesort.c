#include<stdio.h>
int bubblesort(int arr[], int n){
    int temp = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                for (int i = 0; i < n; i++)
                {   
                if (arr[i] != arr[j] && arr[i] != arr[j+1])
                {
                    printf("%d ",arr[i]);
                }
                else{
                         printf("\e[2m%d \e[m",arr[i]);
                    }
                }
                printf("\nindex swapped %d and %d",j,j+1);
                printf("\n");
            }
            
        }
        
    }
    return 0;
}
int main(){
    int n, arr[100];
    printf("Enter the size of array = ");
    scanf("%d",&n);

    printf("Enter the elements of array = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesort( arr, n);
    printf("Sorted array is:- \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}