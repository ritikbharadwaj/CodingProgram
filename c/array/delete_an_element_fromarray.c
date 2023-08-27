#include<stdio.h>

 int main()
 {
    int a[10],i,n,p;
    printf("enter the number of elements in array\n = ");
    scanf("%d",&n);
    printf("enter %d elements = ",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("enter the location where you want to delete the element\n = ");
    scanf("%d",&p);
    if(p>=n+1){
        printf("the deletion is not posssible");
      }
    else{
        for(i=p-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
      }
    printf("the resultant array\n");

    for(i=0;i<n-1;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
