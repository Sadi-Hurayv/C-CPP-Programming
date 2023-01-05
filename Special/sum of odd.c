#include<stdio.h>
#include<math.h>
void main()
{
    int a, b, c, d, e, f, g, h, i, j, sum, n;
    /*printf("Enter the 5 numbers : \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&d);*/
    /*if(a%2!=0)
    {
        f=a;
    }
    else
    {
        f=0;
    }
     if(b%2!=0)
    {
        g=b;
    }
    else
    {
        g=0;
    }
     if(c%2!=0)
    {
        h=c;
    }
    else
    {
        h=0;
    }
     if(d%2!=0)
    {
        i=d;
    }
    else
    {
        i=0;
    }
     if(e%2!=0)
    {
        j=e;
    }
    else
    {
        j=0;
    }
    sum=f+g+h+i+j;
    printf("Sum of odd number is : %d",sum);*/
     sum=0;
     /*if(a%2!=0)
    {
        sum=sum+a;
    }

     if(b%2!=0)
    {
        sum=sum+b;
    }

     if(c%2!=0)
    {
        sum=sum+c;
    }

     if(d%2!=0)
    {
        sum=sum+d;
    }

     if(e%2!=0)
    {
        sum=sum+e;
    }

    printf("Sum of odd number is : %d",sum);*/
    for(i=1;i<=5;i++)
    {
        printf("Enter the number : ");
        scanf("%d",&n);
        if(n%2!=0)
        {
            sum=sum+n;
        }
    }
    printf("Sum=%d",sum);


}
