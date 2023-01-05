#include<stdio.h>
int main()
{
    float w1, w2, p1, p2, avr;
    printf("Enter the weight of the first and second item\n");
    scanf("%f%f",&w1,&w2);
    printf("Enter the number of perches of first and second item\n");
    scanf("%f%f",&p1,&p2);
    avr=((w1*p1)+(w2*p2))/(p1+p2);

    printf("The average value of the items : %f",avr);
    return 0;


}
