#include<stdio.h>
int main()
{
    int i, j, k=1;
    printf("The pattern like :\n");
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }
    return 0;
}
