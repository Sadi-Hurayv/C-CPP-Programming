#include<stdio.h>
int main()
{
    int num[3], odnum[3], evnum[3], odcount=0, evcount=0;
    printf("Input 3 elements in array:");
    for(int i=0; i<3; i++)
    {
        scanf("%d",&num[i]);
    }

    ///odd-even
    for(int i=0; i<3; i++)
    {
        if(num[i]%2==0)
        {
            evnum[evcount]=num[i];
            evcount++;
        }
        else
        {
           odnum[odcount]=num[i];
           odcount++;
        }
    }
    printf("The even element are : \n");
    for(int i=0; i<evcount; i++)
    {
         printf("%d ",evnum[i]);
    }
    printf("\nThe odd element are : \n");
    for(int i=0; i<odcount; i++)
    {
         printf("%d ",odnum[i]);
    }

    return 0;
}



