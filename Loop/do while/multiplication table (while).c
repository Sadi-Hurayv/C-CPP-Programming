#include<stdio.h>
int main()
{
    int i, a, b;
    printf("Enter the term : ");
    scanf("%d",&i);
    a=1;
    do
    {
        b=1;
        do
        {
            printf("%d\t",a*b);
            b++;
        }
        while(b<=10);
        printf("\n");
       a++;

    }
    while(a<=i);
}
