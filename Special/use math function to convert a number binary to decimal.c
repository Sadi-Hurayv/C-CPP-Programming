#include<stdio.h>
#include<math.h>
int main()
{
    int num, ld, sum=0, i;
    printf("Enter a binary number :");
    scanf("%d",&num);
    for(i=0;num!=0;i++)
    {
        ld=num%10;
        num=num/10;
        sum=sum+ld*pow(2,i);
    }

    printf("%d",sum);

}
