#include<stdio.h>
#include<math.h>
void main()
{
    int i, j, num;
    printf("Enter the highest number :");
    scanf("%d",&num);
    int sum=0;
    for(i=1;i<=num;i++)
    {
        sum+=i;
    }
     //printf("sum=%d\n",sum);
    int factorial=1;
    for(j=1;j<=num;j++)
    {
        factorial=factorial*j;
    }
    sum=sum+factorial;
     //printf("sum=%d\n",sum);
    float r;
    r=sqrt(sum);
    printf("Result=%f",r);
}
