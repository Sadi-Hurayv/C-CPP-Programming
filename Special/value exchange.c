#include<stdio.h>
int main()
{
    int x, y, temp;
    x=10;
    y=50;
    printf("Before :\n");
    printf("x=%d\n",x);
    printf("y=%d\n",y);

///   Using 3rd variable
//    temp=x;
//    x=y;
//    y=temp;

/// using arithmetic operator
//    x=x+y;
//    y=x-y;
//    x=x-y;

/// using X-OR
    x=x^y;
    y=x^y;
    x=x^y;


    printf("\n\nAfter :\n");
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    return 0;
}
