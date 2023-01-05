#include<stdio.h>

void main()
{
    float a, b, c, p;
    printf("Enter the three floating number : \n");
    scanf("%f%f%f", &a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    {
        p=a+b+c;
        printf("The perimeter of the triangle is : %f", p);
    }
    else
    {
        printf("There could not be a triangle." );
    }
    return 0;

}

