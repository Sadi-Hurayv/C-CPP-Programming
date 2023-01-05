#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    printf("Enter the value of a, b and c.\n");
    if(scanf("%d %f %c",&a,&b,&c)==3)
        printf("\na=%d \t b=%f \t c=%c",a,b,c);
    else
        printf("Error in input.");

    return 0;
}
