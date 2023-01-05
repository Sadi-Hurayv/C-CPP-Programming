#include<stdio.h>
#include<conio.h>
int main()
{
     float i, n1=1, n2, sum, product=1;
     int  t, j;
    printf("Enter the term :");
    scanf("%d",&t);
    i=1;
    do
    {
        //if(i=1)
        //{
           // printf("1+1/%f!",i);
        //}
        //else
       //{
          //printf("1/%f!",i);
      // }
        printf("%f+",n1);
        for(j=1;j<=i;j++)
        {
            product=product*j;
        }
        sum+=n1;
        n2=1/product;
        //if((n1-n2)<0.4)
        //{
            //goto exit;
       // }
        //else
        //{
         // printf("+");
        //}
        n1=n2;
        i++;
    }
    while(i<=t);
    exit:
     printf("\n");
    printf("%f",sum);
}

