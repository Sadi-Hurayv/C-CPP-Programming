#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the integer number : ");
    scanf("%d",&n);
    for(i=0;n!=0 ;i++)
    {
      j=n%10;
      printf("%d",j);
      n=n/10;
    }
    return 0;
}
