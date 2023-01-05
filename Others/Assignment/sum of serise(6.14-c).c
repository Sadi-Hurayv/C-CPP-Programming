#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
     float sum=0, r, k, j;
    int  i, t;
    printf("Enter the term :");
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        j=i;
        k=1/j;

          r=pow(k ,j);

           sum=sum+r;

        printf("%f  \t",r);
        printf("%f  \n",k);



    }
    printf("sum = %f",sum);
    return 0;
}

