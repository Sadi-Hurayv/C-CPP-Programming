#include<stdio.h>
int main()
{
    int i, j, swa, arr[5];
    printf("Input 5 elements in the array : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<5-1; i++)
    {
        for(j=0; j<5-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swa=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=swa;
            }

            ///for seeing the transition
            printf("\n");
            for(int k=0; k<5; k++)
            {
                printf("%d ",arr[k]);
            }
            printf("\n");
        }
        printf("\n");
        printf("\n");

    }
    printf("Elements of the array in sorted descending order : ");
    for(i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;


}

