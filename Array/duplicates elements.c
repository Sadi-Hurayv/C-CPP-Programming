#include<stdio.h>
int main()
{
    int arr[10], i, j, csum=0, count, dcount, swa;
    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<10-1; i++)
    {
        for(j=0; j<10-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swa=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=swa;
            }
        }
    }
    for(i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(i=csum; i<10; i++)
    {
        count=0;
        for(j=i+1;j<10; j++)
        {
            if(arr[i]=arr[j])
            {
                count++;
            }
        }
        if(count>=1)
        {
            dcount++;
        }
        csum=csum+count;
        printf("%d\n",csum);
    }
    printf("%d",dcount);
    return 0;
}
