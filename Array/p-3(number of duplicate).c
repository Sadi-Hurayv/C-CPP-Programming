#include<stdio.h>
int main()
{
    int num[3], swa, count=0;
    printf("Input 3 elements in array:");
    for(int i=0; i<3; i++)
    {
        scanf("%d",&num[i]);
    }

    ///sort
    for(int i=0; i<3-1; i++)
    {
        for(int j=0; j<3-1-i; j++)
        {
            if(num[j]<num[j+1])
            {
              swa=num[j+1];
              num[j+1]=num[j];
              num[j]=swa;
            }
        }
    }
    /*printf("\n");
    for(int i=0; i<3; i++)
    {
        printf("%d\t",num[i]);
    }*/

    ///duplicate
    for(int i=0; i<2; i++)
    {
        if(num[i]==num[i+1])
        {
           count++;
        }
    }
    printf("\nTotal number of duplicate elements found in the array : %d",count);
    return 0;
}

