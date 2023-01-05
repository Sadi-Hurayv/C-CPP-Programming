#include<stdio.h>
#include<math.h>
int main()
{
    int tnum, num, count, i;
    double sum=0, ld;

    printf("Enter the number :");
    scanf("%d",&num);
    tnum=num;

    while(num!=0)
    {
        ld=num%10;
        sum+=pow(ld,3); ///The "sum" and "ld" should be double. Otherwise to cast int from double will cause data lose. example 153!!!
//        sum+=ld*ld*ld;
        num=num/10;
    }

    if(sum==tnum)
    {
        printf("\aThis is a armstrong number.");
    }
    else
    {
         printf("\aThis is not a armstrong number.");

    }

    return 0;

}
