#include<stdio.h>
void main()
{
    int i, j, k, m;
    for(i=1;i<=7;i++)
    {

        for(j=i;j<30;j++)
        {
            printf(" ");
        }

        for(k=i;k>0;k--)
        {
           printf("%d",k);
        }
        if(i>1)
        {
            for(m=2;m<=i;m++)
            {
               printf("%d",m);
            }

        }

        printf("\n");
    }
    return 0;
}
