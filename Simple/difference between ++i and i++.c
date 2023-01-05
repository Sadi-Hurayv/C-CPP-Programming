#include<stdio.h>
int main()
{
    int x=10, y, z, m, n;

    z=++x;
    y=x++;
    printf("y=%d",y);
    printf("\nz=%d\n",z);

    n=x++;
     m=++x;
    printf("n=%d",n);
    printf("\nm=%d",m);
}
