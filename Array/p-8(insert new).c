#include<stdio.h>
int main()
{
    int i, j, swa, arr[4], ins;
    printf("Input 3 elements in the array in the ascending order : ");
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Input the value to be inserted : ");
    scanf("%d",&ins);

    printf("The exist array list : ");
    for(i=0; i<3; i++)
    {
        printf("%d ",arr[i]);
    }

    arr[3]=ins;
    for(i=0; i<4-1; i++)
    {
        for(j=0; j<4-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swa=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=swa;
            }
        }
    }

    printf("\nAfter insert the list is : ");
    for(i=0; i<4; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}


