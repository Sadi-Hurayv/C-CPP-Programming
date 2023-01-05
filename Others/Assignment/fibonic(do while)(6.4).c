#include<stdio.h>
void main()
{
  int i, a, fib, c, num1=0, num2=1;
  printf("Enter the term:");
  scanf("%d",&a);
  i=1;
  do
 {
     printf("%d ",num1);
      fib=num1+num2;
      num1=num2;
      num2=fib;
      i++;
 }
 while(i<=a);


}

