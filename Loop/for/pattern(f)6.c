#include<stdio.h>
 int main()
 {
     int i, j, space, rows, k, t=1;

     rows=4;
     space=rows+6-1;

     for(i=1;i<=rows;i++)
     {
         for(k=space;k>=1;k--)
         {
             printf(" ");
         }
         for(j=1;j<=i;j++)

             printf("%d ",t++);
             printf("\n");
             space--;


     }
 }
