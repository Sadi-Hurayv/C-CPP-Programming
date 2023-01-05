#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of the elements to be stored in the array :");
    scanf("%d",&n);
    int num1[n],num2[n];
    printf("\nInput %d elements in array:",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&num1[i]);
    }

    printf("\nThe elements stored in the first array are: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",num1[i]);
    }

    ///copy

    printf("\nThe elements copied into the second array are: ");
    for(int i=0; i<n; i++)
    {
        num2[i]=num1[i];

        printf("%d ",num2[i]);
    }
    return 0;
}

