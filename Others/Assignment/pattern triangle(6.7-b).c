#include<stdio.h>
int main()
{
    int i, j, k;
    for(i=1;i<=5;i++)
    {
        for(j=i;j>1;j--)
        {
            printf(" ",i);
        }
        for(j=5;j>=i;j--)
        {
            printf("*",i);
        }
        printf("\n");
    }
}

