#include<stdio.h>
//void multiple_return (int n1, int n2, int *s, int *d)
int main()
{
    int num1=10, num2=25;
    float  s, d;
    multiple_return(num1, num2, &s, &d);
    printf("Sum : %f\nDifference : %f",s,d);
}
///In these type of return to return value we have to only write the data type with the pointer ( float *sum, float *diff) in the called function parameter list.
int multiple_return (int n1, int n2, float *sum, float *diff)
{
    *sum=n1+n2;
    *diff=n2-n1;
}
