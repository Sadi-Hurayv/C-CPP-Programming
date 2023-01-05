#include<stdio.h>
int *getmax(int *n1, int *n2);

int main()
{
    int n1=10, n2=20;
    int *max=NULL;
    printf("n1=%d\nn2=%d\n",n1,n2);
    max=getmax(&n1,&n2);
    printf("The max value is %d",*max);
    return 0;
}
int *getmax(int *n1, int *n2)
{
    if(*n1>*n2)
        return n1;
    else
        return n2;
}
