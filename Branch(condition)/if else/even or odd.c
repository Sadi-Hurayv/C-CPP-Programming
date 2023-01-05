#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter a positive number: ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("This is a even number.",a);

    }
    else
    {
        printf("This is an odd number.",a);
    }
}
