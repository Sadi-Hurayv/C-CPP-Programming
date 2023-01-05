#include<stdio.h>
int main()
{
    int i, j, k, arr[5], num;
    printf("Enter the the 3 number :\n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<3-1;i++)
    {
        for(j=0;j<3-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                num=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=num;

            }

        }
    }
    printf("Maximum elements is:%d\n",arr[3-1]);
    printf("Minimum elements is:%d",arr[0]);
    return 0;


}

