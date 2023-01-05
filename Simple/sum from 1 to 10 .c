#include<stdio.h>
#include<conio.h>
void main()
{
    int n, sum1, sum2=0;
    printf(" Enter a number :");
    scanf("%d",&n);
    sum1=n*(n+1)/2;
    printf("The sum from 1 to %d is %d\n",n,sum1);
    for (int i=1; i<=n; i++)
    {
        sum2 +=i;
    }
    printf(" Sum from 1 to %d is %d",n,sum2);
    return 0;
}
