#include<stdio.h>
int main()
{
    int n=5, result;
    result=factorial(n);
    printf("Factorial of 5 is %d.\n",result);
}
int factorial(int num)
{
    int fact;
    if(num==1)
        return 1;
    else
        fact=num*factorial(num-1);
    return fact;
}
