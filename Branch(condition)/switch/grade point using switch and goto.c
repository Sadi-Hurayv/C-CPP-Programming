#include<stdio.h>
int main()
{
    int grade;
    float num;
    read:
    printf("Enter the obtained number :");

    scanf("%f",&num);

    grade=num/10;

    if(num<=100&&num>=90)
        grade=8;

     if(num<33&&num>=0)
        grade=2;

    switch (grade)
    {

    case 2:
        printf("Grade : F");
        break;
    case 3:
        printf("Grade : D");
         break;
    case 4:
        printf("Grade : C");
         break;
    case 5:
        printf("Grade : B");
         break;
    case 6:
        printf("Grade : A-");
         break;
    case 7:
        printf("Grade : A");
         break;
    case 8:
        printf("Grade : A+");
         break;

    default:
        printf("The number you entered is not correct. ");

    }
    printf("\n\n");
       if(num>100||num<0)
    {
        goto read;
    }



}
