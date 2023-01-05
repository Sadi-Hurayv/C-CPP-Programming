#include<stdio.h>
int main()
{
    char c;
    printf("TRAVEL GUIDE\n\n");
    printf("A for Air Service.\n");
    printf("B for Bus Service.\n");
    printf("C for Cab Service.\n");
    printf("T for Train service.\n");
    printf("L for Launch service.\n");
   // printf("X To Skip.\n");//
    printf("\n\nEnter your choice:\t");
    c= getchar();
    //scanf("%c",&c);//
    printf("\n");
    switch(c)
    {
    case 'A':
        printf("Air Display");
        break;
        case 'B':
        printf("Bus Display");
        break;
        case 'C':
        printf("Car Display");
        break;
        case 'T':
        printf("Train Display");
        break;
        case 'L':
        printf("Launch Display");
        break;
        default:
            printf("You  choose the wrong key word.");
    }

}
