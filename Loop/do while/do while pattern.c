#include<stdio.h>
int main()
{
    int i, j;
    i=1;
    do
    {
        j=i;
        do
        {
            printf("%d",i);//printf("%d",i);
            j--;
        }
        while(j>0);
        i++;
        printf("\n");
    }
    while(i<=5);

}
