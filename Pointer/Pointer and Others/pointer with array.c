#include<stdio.h>
int main()
{
    int p[5]={1,2,3,4,5};
    int *ptr;
    ptr=p;/// equivalent to prt=&p[0];
    printf("Addr(ar)\tAddr(poin)\tvalue(ar)\tvalue(poin)\n");
    for(int i=0; i<5; i++)
    {
        printf("%u \t %u \t %d \t\t %d \n",&p[i],ptr+i,p[i],*(ptr+i));
    }
    return 0;
}
