#include<stdio.h>
int main()
{
    int i, j, a[3][3], n, b[3][3], k, l, re[3][3], sum=0;
    printf("Input the elements of 3 by 3 matrix below :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("Input the number you want to multiply with the matrix : ");
    scanf("%d,",&n);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=n*a[i][j];
            printf("%d\t",b[i][j]);
            if(j==2)
            {
                printf("\n");
            }
        }

    }
    printf("\n\nMultiply the matrix with matrix.\n");
    for(i=0;i<3;i++)
    {
        k=0;
        mat:
        for(j=0,l=0;j<3,l<3;j++,l++)
        {

            sum=sum+(a[i][j]*b[l][k]);

        }
        re[i][k]=sum;
        printf("%d\t",re[i][k]);
        if(k==2)
        {
            printf("\n");
        }
        k++;
        if(k<3)
        {
            goto mat;
        }

    }
    return 0;

}
