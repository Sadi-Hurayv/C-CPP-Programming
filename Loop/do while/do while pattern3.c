#include<stdio.h>
int main()
{
    int i, j, z;
    i=1;
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

        i++;

    }
    while(i<=5);

}
