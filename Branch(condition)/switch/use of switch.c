#include<stdio.h>
void main()
{
    int a;
    printf("Enter the number between 1 to 12 \n");
    top:
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("JANUARY");
            break;
        case 2:
            printf("FEBRUARY");
            break;
        case 3:
            printf("MARCH");
            break;
        case 4:
            printf("APRIL");
            break;
        case 5:
            printf("MAY");
            break;
        case 6:
            printf("JUNE");
            break;
        case 7:
            printf("JULY");
            break;
        case 8:
            printf("AUGUST");
            break;
        case 9:
            printf("SEPTEMBER");
            break;
        case 10:
            printf("OCTABAR");
            break;
        case 11:
            printf("NOVEMBER");
            break;
        case 12:
            printf("DECEMBER");
            break;
        default:
            printf("Input the number between 1 to 12\n");
            goto top;
            //break;


    }
}
