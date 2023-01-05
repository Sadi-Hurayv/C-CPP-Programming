#include<stdio.h>
int main()
{
    int i, j, arr[5];
    printf("Input three number of elements in the array\n");
    for(i=0;i<3;i++)
    {
        printf("elements - %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("The values store into the array are :\n");
    for(i=0;i<3;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nThe values store into the array in reverse are :\n");
    for(i=2;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
    return 0;

}
