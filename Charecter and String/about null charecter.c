#include<stdio.h>
int main()
{
   char city[10]="DHAKA";
   ///The value of i(10) is rater than the length of string.
   for(int i=0; i<10; i++)
   {
       printf("%c",city[i]);
   }
   ///To print a string null charecter will not be printed.


    return 0;
}

