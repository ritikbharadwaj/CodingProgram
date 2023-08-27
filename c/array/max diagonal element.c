#include <stdio.h>
int main()
{
 int a[3][3],i,j,max=a[0][0];
 printf("enter the number of array= ");
 for (i=0;i<3;i++){
   for (j=0;j<3;j++){
     scanf("%d",&a[i][j]);
   }
 }
 printf("matrix is\n");
 for (i=0;i<3;i++){
   for (j=0;j<3;j++){
     printf("%d\t",a[i][j]);
   }
   printf("\n");
 }
 for (i=0;i<3;i++){
   for (j=0;j<3;j++){
    if(i==j){
     if(max<a[i][j]){
       max=a[i][j];
     }
    }
}
}
printf("maxmum  of diagonal=%d",max);

return 0;
}