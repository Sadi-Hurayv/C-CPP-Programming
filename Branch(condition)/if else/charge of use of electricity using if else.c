#include<stdio.h>
int main()
{
    int cus;
    float cha, u;
    printf("Enter the customer id :");
    scanf("%d",&cus);
    printf("Enter the used unit :");
    scanf("%f",&u);
    printf("\n ");
    if(u>=0&&u<=200)
    {
        cha=.50*u;
        printf("charge :%f",cha);
    }
    else if(u>=0&&u<=200)
    {
        cha=.50*u;
        printf("charge :%f",cha);
    }
    else if(u>200&&u<=400)
    {
        cha=100+.65*(u-200);
        printf("charge :%f",cha);
    }
    else if(u>400&&u<=600)
    {
        cha=230+.80*(u-400);
        printf("charge :%f",cha);
    }
    else if(u>600)
    {
        cha=390+1.0*(u-600);
        printf("charge :%f",cha);
    }
    else
    {
        printf("You input the negative unit number. \nInput the positive unite number.");

    }
}
