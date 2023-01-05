#include<stdio.h>
int main()
{
    int n, lastd, sum=0;

    printf("Enter the number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        lastd=n%10;
        sum=sum+lastd;
        n=n/10;

    }
    printf("The sum of the digit : %d",sum);
}
