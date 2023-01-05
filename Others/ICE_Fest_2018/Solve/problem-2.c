#include<stdio.h>
int main()
{

    int t, numi, p, i, rep;

    scanf("%d",&t);
    int arri[t], arrp[t], arrrep[t];
    for(i=0; i<t; i++)
    {
        scanf("%d",&numi);
        scanf("%d",&p);
        arrrep[i]=(numi*p)-(5*(numi-1));
        arri[i]=numi;
        arrp[i]=p;
    }
    for(i=0; i<t; i++)
    {
        printf("%d %d\n",arri[i],arrp[i]);
        printf("%d\n",arrrep[i]);
    }
    return 0;
}
