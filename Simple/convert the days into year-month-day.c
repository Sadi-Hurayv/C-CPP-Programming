#include<stdio.h>
int main()
{
    int d1, d2, w, y;
    printf("Enter the days : ");
    scanf("%d",&d1);
    y=d1/365;
    w=(d1-(y*365))/7;
    d2=d1-(y*365)-(w*7);
    printf("%d Year %d Week %d Days.",y,w,d2);
    return 0;

}
