#include<stdio.h>
int main()
{
    float i, j, product=1, k;
    printf("Enter the term :");
    scanf("%f",&i);
    for(j=1; j<=i;j++)
    {
        product=product*j;
    }
    printf(" The factorial of %.0f is %.0f",i,product);
    return 0;

}

