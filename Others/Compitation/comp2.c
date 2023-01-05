#include<stdio.h>
int main()
{
    int t, j, i,k ;
    scanf("%d",&t);
    int n[15];
    char re[12];
    for(i=0;i<t;i++)
    {
        for(j=0;j<10;j++)
        {
            scanf("%d",&n[j]);
        }
        for(j=0;j<9;j++)
        {
                if(n[j]<n[j+1]||n[j+1]==n[j])
                {
                    re[i]='o';
                }
                else
                {
                    if(j>0&&n[j+1]<n[j]&&(n[j]>n[j-1]||n[j]==n[j-1]))
                    {
                        re[i]='u';
                    }
                    break;
                }
        }
        for(j=0;j<9;j++)
        {
                if(n[j]>n[j+1]||n[j+1]==n[j])
                {
                    re[i]='o';
                }
                else
                {
                    if(j>0&&n[j+1]>n[j]&&(n[j]<n[j-1]||n[j]==n[j-1]))
                    {
                        re[i]='u';
                    }
                    break;
                }
        }
    }
     printf("Lumberjacks:\n");

        for(j=0;j<t;j++)
        {
            printf("%c\n",re[j]);
        }
        return 0;
}
