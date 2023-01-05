#include<stdio.h>
int arr_sum(int arr[],int num);
int main()
{
    int array[10], n=10,sum;
    for(int i=0; i<10; i++)
        scanf("%d",&array[i]);
    sum=arr_sum(array,n);
    printf("SUM=%d",sum);
}
int arr_sum(int arr[],int num)
{
    int sumf=0, i;
    for(i=0; i<num; i++)
        sumf+=arr[i];
    return sumf;
}
