#include<stdio.h>
int main()
{
    int t, h, w, l, i, j, count;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d",&l,&h,&w);
        if(l<=0 || h<=0 || w<=0)
        {
            printf("wrong input.\n");
            continue;
        }

        if(l<=20 && w<=20 && h<=20)
            printf("Case %d: good\n",i);
        else
            printf("Case %d: bad\n",i);
    }
    return 0;
}
