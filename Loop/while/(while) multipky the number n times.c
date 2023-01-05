#include<stdio.h>
int main()
{
    int y, x, n, count;
    printf("Enter the number you want to multiply : ");
    scanf("%d",&x);
     printf("Enter the number of how many times you want to multiply : ");
    scanf("%d",&n);
    y=1;
    count=1;
    while(count<=n)
    {
        count++;
        y=y*x;

    }
    printf("The number after the multiply is %d.",y);

}
