#include<stdio.h>
int main()
{
    int i, j;
    printf("Multiplication table");
    printf("\n");
    i=1;

    do
    {
        j=1;

        do
        {

          printf("%d\t",i*j);
          j++;
        }
        while(j<=10);
        printf("\n");
        i++;
    }
    while(i<=10);


}
