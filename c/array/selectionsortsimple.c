#include <stdio.h>
int selectionsort(int arr[], int n){
     int smallest, temp;
    for (int i = 0; i < n-1; i++) {
        smallest = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[smallest]) {
                smallest = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }
    return 0;
}

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:- \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    selectionsort(arr, n);
    printf("The sorted array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}