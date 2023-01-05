#include<stdio.h>
void main()
{
    int n;
    printf("Enter a integer number : ");
    scanf("%d",&n);
    if(n>80&&n<0)
    {
        printf(" Number is out of range.");
    }
    else if(0<=n && n<=20)
    {


            printf("The number is in the [0-20]");

    }
     else if (21<=n && n<=40)
    {


            printf("The number is in the [21-80]");

    }
     else if(41<=n && n<=60)
    {


            printf("The number is in the [41-60]");

    }
     else if(61<=n && n<=80)
    {


            printf("The number is in the [61-80]");

    }



}
