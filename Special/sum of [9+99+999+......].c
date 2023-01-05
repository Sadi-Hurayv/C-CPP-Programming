#include<stdio.h>
int main()
{
    float i, j;
    float sum=0, k=0;
    printf("Enter the term :");
    scanf("%f",&i);
    for(j=1; j<=i;j++)
    {
      k=(k*10)+9;
      sum=sum+k;
      printf("%.0f",k);
      if(j<i) printf("+");

    }
    printf(" sum=%.0f",sum);
    return 0;

}
