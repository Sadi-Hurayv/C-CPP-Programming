#include<stdio.h>
#include<string.h>
int main()
{
    char str[50]="DHAKA IS THE CAPITAL OF BANGLASH.";
    int len;

    len = strlen(str);
    printf("The length of the string (%s) is %d.",str,len);
    printf("\n");

    return 0;
}
