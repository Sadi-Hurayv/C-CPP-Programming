#include<stdio.h>
int main()
{
    int j, i, k;
    printf("Enter the number : ");
    scanf("%d",&k);

    for(i=1;i<=k;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
    }
}
