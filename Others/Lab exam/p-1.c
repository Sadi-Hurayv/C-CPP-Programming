#include<stdio.h>
int main()
{
    int i, j, mat[2][2], sum=0;
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("element -[%d],[%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The matrix is : \n");
     for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
    for(i=0,j=0; i<2; i++)
    {

        sum=sum+mat[j][i];
    }
    printf("Addition of the right Diagonal elements is : %d",sum);
    return 0;
}
