#include<stdio.h>
int main()
{
    int i, num, arr[10], k;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i=0;i<10;i++)
    {
        k=num*(i+1);
        printf("%d  *   %d  =   %d \n",num,i+1,k);
    }
    return 0;
}
