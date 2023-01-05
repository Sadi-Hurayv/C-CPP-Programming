#include<stdio.h>
int main()
{
    int a=10, b=20;
    printf("Swaping using call by value \n\n");
    printf("Before swap value of a : %d\n",a);
    printf("Before swap value of b : %d\n",b);
    printf("Swaping using without pointer\n");
    swap(a,b);///call by value
    printf("After swap value of a : %d\n",a);
    printf("After swap value of b : %d\n\n",b);

    printf("Swaping using call by value \n\n");
    printf("Before swap value of a : %d\n",a);
    printf("Before swap value of b : %d\n",b);
    printf("Swaping using with pointer\n");
    swappointer(&a,&b);///call by reference
    printf("After swap value of a : %d\n",a);
    printf("After swap value of b : %d\n",b);
}
swappointer(int *a, int *b)///call by reference
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
swap(int n, int m)///call by value
{
    int temp;
    temp=n;
    n=m;
    m=temp;
}

