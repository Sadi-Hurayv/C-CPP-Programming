#include<stdio.h>
void main()
{
    int i, j, k, m;
    for(i=1;i<=3;i++)
    {

        for(j=i;j<4;j++)
        {
            printf(" ");
        }

        for(k=i;k>0;k--)
        {
           printf("*");
        }
        if(i>1)
        {
            for(m=2;m<=i;m++)
            {
               printf("*");
            }

        }

        printf("\n");
    }
    return 0;
}
