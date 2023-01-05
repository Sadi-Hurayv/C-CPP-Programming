#include<stdio.h>
int main()
{
    int day, week, year, d ;
    printf("Enter the days : ");
    scanf("%d",&day);
    year=day/365;
    week=(day-(year*365))/7;
    d=day-((year*365)+(week*7));

    printf("year:%d\n week:%d\n day:%d",year,week,d);
    return 0;
}
