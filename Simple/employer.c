#include<stdio.h>
int main()
{
    float s, tsalary;
    int h, id;
    printf("Enter the ID : ");
    scanf("%d",&id);
    printf("Input the working hours : ");
    scanf("%d",&h);
    printf("\nInput the salary per hour : ");
    scanf("%f",&s);
    tsalary=(h*30)*s;
    printf("\nThe total salary : %f",tsalary);
    return 0;
}
