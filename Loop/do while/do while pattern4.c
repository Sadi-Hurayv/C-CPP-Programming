#include<stdio.h>
int main()
{
    int i, j, z;
    i=5;
    do
    {
            z=1;
            do
            {
              printf("%d ",z);
              z++;
            }
            while(z<=i);
            printf("\n");


        i--;

    }
    while(i>0);

}
