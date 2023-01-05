#include<stdio.h>
int main()
{
    int num[3], mnum[3], swa, count=0;
    printf("Input 3 elements in array :");
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

    ///unique
    for(int i=0; i<3-1; i++)
    {
        if(num[i]!=num[i+1])
        {
           mnum[count]=num[i];
           count++;
           if(i==3-2)
           {
               mnum[count]=num[i+1];
               count++;
           }
        }
    }

    printf("\nThe unique elements found in the array are : ");
    for(int i=0; i<count; i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}


