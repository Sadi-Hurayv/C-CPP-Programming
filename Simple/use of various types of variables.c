#include<stdio.h>
int main()
{
    float x, p;
    double y, q;
    unsigned k;
    int m=54321;
    long int n=1234567890;
    x=1.234567890000;
    y=987654321;
    k=54321;
    p=q=1.0;
    printf("m=%d\n",m);
    printf("n=%ld\n",n);
    printf("x=%.12lf\n",x);
    printf("x=%f\n",x);
    printf("y=%.12lf\n",y);
    printf("y=%.1f\n",y);
    printf("k=%u\n",k);
    printf("p=%f\n",p);
    printf("q=%.12lf",q);

}
