#include<stdio.h>
int main()
{
    int a=5;
    int *ptr1, **ptr2;
    ptr1=&a;
    ptr2=&ptr1;
    printf("a = %d\n",a);
    printf("&a = %u\n",&a);
    printf("*ptr1 = %d\n",*ptr1);
    printf("ptr1 = %u\n",ptr1);
    printf("&ptr1 = %u\n",&ptr1);
    printf("**ptr2 = %d\n",**ptr2);
    printf("ptr2 = %d\n",ptr2);
    printf("&ptr2 = %u\n",&ptr2);
}
