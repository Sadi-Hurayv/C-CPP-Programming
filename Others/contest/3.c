#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, t;
    long int k, sum=0;
    char ch[10];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%s",&ch);
        if(strcmp(ch,"donate")==0)
        {
            scanf("%ld",&k);
            sum+=k;
        }
        else if(strcmp(ch,"report")==0)
        {
            printf("%ld\n",sum);
        }
    }
    return 0;
}
