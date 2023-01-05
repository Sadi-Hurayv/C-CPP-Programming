#include<stdio.h>
int main()
{
    float h, w, p, a;
    printf("Enter the hight and width of the rectangle in inches\n");
    scanf("%f%f",&h,&w);
    p=2*(h+w);
    a=h*w;
    printf("Paramiter is %f inches\n",p);
    printf("Area is %f square inches",a);
}
