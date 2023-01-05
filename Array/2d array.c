#include <stdio.h>

int main()
{
    int arr[2][3] = {{2,3},{9}};
    //for (int i = 0; i<2; i++)
    //{
    //    for (int j = 0; j<3;j++)
    //    {
    //        scanf("%d", &arr[i][j]);
    //    }
    //}

    printf("\n");

    for (int i = 0; i<2; i++)
    {
        printf("\n");
        for (int j = 0; j<3;j++)
        {
            printf("%d\t", arr[i][j]);
        }
    }
}
