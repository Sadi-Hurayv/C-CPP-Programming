#include<stdio.h>
int main()
{
    int n, count;
    float num, sum, avr;
    printf("Enter the number of numbers you want the average : ");
    scanf("%d",&n);
    printf("Enter the numbers below : \n");
    sum=0;
    count=0;
    while(count<n)
    {
        scanf("%f",&num);
        sum=sum+num;
        count=count+1;

    }
    avr=sum/n;
    printf("The sum of the numbers : %f\n",sum);
    printf("The average of the numbers : %f",avr);
    return 0;
}
