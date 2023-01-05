#include<stdio.h>
int main()
{
    int x=125;
    char a='A';
    float p=10.25, q=18.76;
    printf("%c stored at address %d\n",a,&a);
    printf("%d stored at address %u\n",x,&x);
    printf("%f stored at address %u\n",p,&p);
    printf("%f stored at address %u\n",q,&q);
}
