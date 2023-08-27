#include <stdio.h>
int n=0;
void merge(int a[], int p, int q, int r) {
    int m = n;
    // printf("\n%d\n",m);
    int i, j, k;
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++) 
    {
        L[i] = a[p+ i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = a[q + 1 + j];
    }
    
    i = 0;
    j = 0;
    k = p;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        }
        else {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }
     
    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
    
    for (int i = 0; i < m; i++)
                {   
                    printf("%d ",a[i]);
                }
            printf("\n");
    
}

void mergeSort(int a[], int p, int r) {
    
    if (p < r) {
        int q = (p+r) / 2;
        mergeSort(a, p, q);
        mergeSort(a, q+1, r);
        merge(a, p, q, r);
       
    }
}

int main() 
{
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    mergeSort(a, 0, n-1);
    printf("After sorting: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}