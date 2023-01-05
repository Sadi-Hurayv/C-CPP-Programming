#include<stdio.h>
int main()
{
    int i, j, num, swa;
    printf("Enter the amount of number :");
    scanf("%d",&num);
    int  arr[num];
    printf("Enter the numbers randomly below.\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<num-1; i++)
    {
        for(j=0; j<num-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swa=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=swa;
            }
        }
    }
    for(i=0; i<num; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;


}
