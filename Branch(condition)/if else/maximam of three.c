#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("\n%d is the highest number.",a);
        }
         else
         {
                printf("\n%d is the highest number.",c);

         }
        }
        else
        {
            if(b>c)
            {


            printf("\n%d is the highest number.",b);
        }
        else
        {
           printf("\n%d is the highest number.",c);
        }
    }
}
