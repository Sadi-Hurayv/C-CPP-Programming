#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10}, *ptr, i, sum=0;
    ptr=arr;
//    for(i=0; i<10; i++)
//    {
//        sum+=*(ptr+i);
//    }
//    for(i=0; i<10; i++, ptr++)
//    {
//        sum+=*(ptr);
//    }
    for(ptr=arr; ptr<=&arr[9]; ptr++)
    {
        sum+=*(ptr);
    }
    printf("The sum of the array is %d\n",sum);
    return 0;
}
