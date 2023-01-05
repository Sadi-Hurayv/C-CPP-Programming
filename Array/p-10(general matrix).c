#include<stdio.h>
int main()
{
    int i,j,mat[3][3];

    printf("Input elements in the matrix : \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    printf("The matrix is : \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
