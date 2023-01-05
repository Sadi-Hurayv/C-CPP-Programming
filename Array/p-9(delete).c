#include<stdio.h>
int main()
{
    int i, j, swa, arr[5], pdel;
    printf("Input 5 elements in the array in the ascending order : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Input the position where to delete : ");
    scanf("%d",&pdel);

    for(i=pdel-1; i<5-1; i++)
    {
        arr[i]=arr[i+1];
    }


    printf("The new list is : : ");
    for(i=0; i<5-1; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}



