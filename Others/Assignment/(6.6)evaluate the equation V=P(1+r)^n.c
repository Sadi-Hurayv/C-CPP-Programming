#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    printf("P\tr\tn\tV\n");
    float p, v, r, n, a, b;
    n=1;
    r=.10;
    for(p=1000;p<=10000;p=p+1000)
    {
        printf("%.0f\t",p);
        printf("%.2f\t",r);
        printf("%.0f\t",n);
              b=1+r;
              a=pow(b,n);
              v=p*a;
        printf("%.3f",v);
        printf("\n\n");
             n=n+1;
             r=r+.01;
    }
    return 0;
}
