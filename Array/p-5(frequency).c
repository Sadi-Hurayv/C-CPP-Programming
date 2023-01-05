#include<stdio.h>
int main()
{
    int num[8], fnum[8], frq[8], swa, fncount=0, frqcount;
    printf("Input 8 elements in array:");
    for(int i=0; i<8; i++)
    {
        scanf("%d",&num[i]);
    }

    ///sort
    for(int i=0; i<8-1; i++)
    {
        for(int j=0; j<8-1-i; j++)
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
    ///frequency
    for(int i=0; i<8; i++)
    {
        frqcount=0;
        if(num[i]!=num[i+1])
        {
            fnum[fncount]=num[i];
            frqcount++;
            frq[fncount]=frqcount;
            fncount++;
        }
        if(num[i]==num[i+1])
        {
            fnum[fncount]=num[i];
            for(int j=i; j<8; j++)
            {
               if(num[i]==num[j])
               {
                    frqcount++;
               }
            }
            frq[fncount]=frqcount;
            fncount++;
            i=i+frqcount-1;
        }
    }
    printf("The frequency of all elements in the array : \n");
    for(int i=0; i<fncount; i++)
    {
         printf("%d occurs %d times.\n",fnum[i],frq[i]);
    }
    return 0;
}


