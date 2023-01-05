#include<stdio.h>
int main()
{
    int n, ldigit;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        ldigit=n%10;
        printf("%d",ldigit);
        n=n/10;
    }
    return 0;
}
