#include<stdio.h>
int main()
{
    int n1, n2, i, j, t;

    scanf("%d",&t);
    char re[t];
    while(t<15)
    {
        for(i=0;i<t;i++)
        {
            scanf("%d%d",&n1,&n2);
            if(n1>n2)
            {
                re[i]='>';
            }
            else if(n1<n2)
            {
                re[i]='<';
            }
            else if(n1==n2)
            {
                re[i]='=';
            }
        }
        for(i=0;i<t;i++)
        {
            printf("%c\n",re[i]);
        }

    }

    return 0;
}
