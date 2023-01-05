#include<stdio.h>
int main()
{
    int arr[10], i, j, swa;
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
                arr[j]=arr[j+1];
            }
        }
    }
    for(i=0; i<10; i++)
    {
        for(j=0;j<=)
    }
}
