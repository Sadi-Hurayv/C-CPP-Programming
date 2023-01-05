#include<stdio.h>
int main()
{
    int y;
    for(int i=1;i<=10;i++)
    {
        for(int x=1;x<=10;x++)
        {
            printf("%d*%d=%d\n\n",i,x,i*x);
        }
        printf("\n\n");
    }
    return 0;
}
