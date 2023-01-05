#include<stdio.h>
#define period 10
#define principle 5000.00
main()
{
     int year;
     float amount, value, inrate;
     amount=principle;
     year=0,inrate=0.11;

     ///by using coma we can declar more then variable

     while(year<=period)
     {
         printf("%d     %8.4f\n",year, amount);
         value=amount+amount*inrate;
         year=year+1;
         amount=value;

     }
     return 0;
}
