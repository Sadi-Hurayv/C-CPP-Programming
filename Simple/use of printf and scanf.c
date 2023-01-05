#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer number : ");
    scanf("%d",&num);/*There will be no error if we use only scanf*/
    if(num<100)
    {
        printf("Your number is smaller then 100.");
    }
    else
    {
        printf("Your number contains more then two digit.");
    }
}

