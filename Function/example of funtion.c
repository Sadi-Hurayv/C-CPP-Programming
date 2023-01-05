#include<stdio.h>
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
float div(int x, int y);
float rarea(int x, int y);
float carea(int x);
int main()
{
    int a=5, b=10, c=15, d=20, e=25, f=30;
    printf("add: %d\n",add(a,b));
    printf("sub: %d\n",sub(b,a));
    printf("mul: %d\n",mul(c,d));
    printf("div: %f\n",div(c,d));
    printf("rectangle area: %f\n",rarea(a,c));
    printf("circle area: %f\n",carea(a));

}
int add(int x, int y)
{
    return (x+y);
}
int sub(int x, int y)
{
    return (x-y);
}
int mul(int x, int y)
{
    return (x*y);
}
float div(int x, int y)
{
    return (x/(y*1.00));
}
float rarea(int x, int y)
{
    return (0.5*x*y);
}
float carea(int x)
{
    return (3.1416*x*x);
}

