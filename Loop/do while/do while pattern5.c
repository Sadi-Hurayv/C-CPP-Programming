#include<stdio.h>
int main()
{
    int i, j, z;
    i=5;
    do
    {
            z=i;
            do
            {
              printf("%d ",z);
              z--;
            }
            while(z>0);
            printf("\n");


        i--;

    }
    while(i>0);

}
