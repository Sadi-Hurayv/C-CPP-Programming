#include<stdio.h>
void main()
{
    int a, b, i;
    printf("Enter your number : ");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {

        printf("%d*%d=%d\n",i,a,i*a);
    }
}
