#include <stdio.h>
int main()
{
 int a[3][3],i,j,temp;
 printf("temp=%d",temp);
 printf("enter the number of array= ");
 for (i=0;i<3;i++){
   for (j=0;j<3;j++){
     scanf("%d",&a[i][j]);
   }
 }
 printf("matrix is\n");
 for (i=0;i<3;i++){
   for (j=0;j<3;j++){
     if(i==j){
       temp=temp+a[i][j];
       printf("%d",a[i][j]);
     }
     else{
       printf("\t");
     }
    }
    printf("\n");
}
printf("sum of diagonal=%d",temp);
return 0;
}
