#include<stdio.h>
#include<curses.h>
int search(int arr[], int size, int key){

    for (int i = 1; i <= size; i++)
    {
        if (arr[i]==key)
        {
            return 1;
        }
    }
    return 0;   
}
int main(){
    int arr[100], n=0, key=0;

    printf("Enter the size of array= ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to search= ");
    scanf("%d",&key);
    int found = search(arr, 10, key);
    if (found == 1)
    {
        printf("key is present ");
    }
    else{
        printf("key is not present ");
    }
    return 0;
}