#include<stdio.h>
int main()
{
    int p, q, r, s;
    printf("Enter the value of p,q,r,s :\n");
    scanf("%d%d%d%d",&p,&q,&r,&s);
    if(q>0 && r>0 && r>0 &&p%2==0)
    {
        if(q>r && s>p && r+s>p+q)
        {
            printf("Correct values");
        }
        else
        {
            printf("Wrong values");

        }
    }

        else
        {
            printf("wrong values");

        }
return 0;




}
