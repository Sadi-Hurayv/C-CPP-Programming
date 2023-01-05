#include<stdio.h>
int main()
{
    int N, i, M, arr[10], t, j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%d",&M);
        scanf("%d",&N);
        for(i=0;i<M&&N!=0;i++)
        {
            arr[i]=N%10;
            N=N/10;
        }
        for(i=0;i<M;i++)
        {
            if(arr[i]+arr[i+1]==2)
            {
                printf("NO\n");
                break;
            }
            if(arr[i]!=arr[i+1]&&i==M-1)
            {


                printf("YES\n");


            }
        }

    }

    return 0;
}
