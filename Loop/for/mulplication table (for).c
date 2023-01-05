#include<stdio.h>
void main()
{
    int a, b, i, c;
    printf("Enter your number : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
       for(b=1;b<=10;b++)
       {
           c=i*b;
       printf("%d\t",c);

       }
        printf("\n");



    }

}

