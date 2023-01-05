#include<stdio.h>
int main()
{
    float i, j;
    float sum, k;
    printf("Enter the term :");
    scanf("%f",&i);
    for(j=1; j<=i;j++)
    {

        printf("1/%.0f+",j);
        k=(1/j);
        sum=sum+k;

    }
    printf(" sum=%f",sum);
    return 0;

}
