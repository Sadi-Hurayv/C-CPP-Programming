 #include<stdio.h>
void main()
{
    int s, e, i, j, count;
    printf("Input the starting number of range : ");
    scanf("%d",&s);
    printf("Input the ending number of range : ");
    scanf("%d",&e);
    for(i=s;i<=e;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count=count+1;
            }
        }

        if(count==2)
        {
            printf("%d\t",i);
        }

    }
    return 0;

}
