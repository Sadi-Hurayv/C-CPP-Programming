#include<stdio.h>
void main()
{
    int i, j, k, m, count=1;
    for(i=3;i>0;i--)
    {

        for(j=i;j>0;j--)
        {
            printf(" ");
        }

        for(k=1;k<=count;k++)
        {
           printf("*");
        }
        count+=2;

        printf("\n");
    }
    return 0;
}

