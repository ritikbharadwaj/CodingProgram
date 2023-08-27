#include <stdio.h>
int main()
{
 int a[4][4],i,j;
 printf("enter the number of array= ");
 for (i=0;i<4;i++){
   for (j=0;j<4;j++){
     scanf("%d",&a[i][j]);
   }
 }
 printf("matrix is\n");
 for (i=0;i<4;i++){
   for (j=0;j<4;j++){
     if(i<=j){
       printf("%d\t",a[i][j]);
     }
     else{
       printf("\t");
     }
    }
    printf("\n");
}
return 0;
}
