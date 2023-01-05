#include<stdio.h>
int main()
{
    int num, i, count=0;
    int arr[10];
    printf("Enter the integer number :");
    scanf("%d",&num);
    for(i=0;i<10&&num!=0;i++)
    {
        arr[i]=num%2;
        num=num/2;
        //if(num=1&&arr[i])
        //{
            count++;
        //}

    }
    for(i=count-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;

}
