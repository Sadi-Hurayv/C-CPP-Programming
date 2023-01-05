#include<stdio.h>
int main()
{
    char answer;
    printf("Would you like to know my name?\n\n");
    printf("Type Y for Yes and N for No.\n");
    answer=getchar();
    if(answer=='Y'||answer=='y')
    {
        printf("My name is BUSY BEE.\n\n");
    }
    else
    {
        printf("You are good for nothing.\n\n");
    }
    return 0;


}
