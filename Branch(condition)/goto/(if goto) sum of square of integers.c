#include<stdio.h>
int main()
{
    int i, n, sum=0;
    printf("Enter the number which you want to do the sum of square up to the number : ");
    scanf("%d",&i);
    n=1;
    loop:
    sum=sum+n*n;
    if(n==i)
    {
        goto print;
    }
    else
    {
        n=n+1;
        goto loop;
    }
    print:
        printf("The sum of the square : %d",sum);
}
