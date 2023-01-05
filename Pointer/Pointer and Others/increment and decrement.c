#include<stdio.h>
int main()
{
    int a=10, *ptr=&a;
    printf("a = %d\n",a);
    (*ptr)++;
    printf("(*ptr)++ = %d\n",(*ptr));
    a=20;
    printf("a = %d\n",a);
    (*ptr)--;
    printf("(*ptr)-- = %d\n",(*ptr));
    return 0;
}
