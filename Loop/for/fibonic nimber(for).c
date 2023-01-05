#include<stdio.h>
int main()
{
  int i, a, fib, c, num1=0, num2=1;
  printf("Enter the term:");
  scanf("%d",&a);
  for(i=1;i<=a ;i++)
  {
      printf("%d ",num2);
      fib=num1+num2;
      num1=num2;
      num2=fib;

  }
    return 0;

}
