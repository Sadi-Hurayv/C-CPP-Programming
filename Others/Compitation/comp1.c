#include<stdio.h>
void main()
{
    int i, j, v, t, arr[3];
    for(i=0;i<2;i++)
    {
        scanf("%d%d",&v,&t);
        arr[i]=2*v*t;
    }
    for(i=0;i<2;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
