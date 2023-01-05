#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
     float ang, sum=1, r;
    int  i, count=1, t, factorial=1;
    printf("Enter the angle in digree :");
    scanf("%f",&ang);
    printf("Enter the term :");
    scanf("%d",&t);
    r=(ang*3.1416)/180;
    for(i=1;i<=t;i++)
    {
        if(i%2==0)
        {
              for(int j=1; j<=i;j++)
           {
               factorial=factorial*j;
           }

          r=(pow(r,i))/factorial;
           if(count%2!=0)
        {
            sum=sum-r;
        }
        else
        {
           sum=sum+r;
        }
        count++;
        printf("%f  \n",r);

        }


    }
    printf("cos%f = %f",ang,sum);
}

