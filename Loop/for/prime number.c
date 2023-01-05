#include<stdio.h>
void main()
{
    int l, u, i, j, count;
    printf("Enter the lower limit and upper limit of a range from which you want to find the prime number.\n");
    printf("Enter the lower limit : ");
    scanf("%d",&l);
    printf("Enter the upper limit : ");
    scanf("%d",&u);
    for(i=l;i<=u;i++)
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
