#include<stdio.h>
int main()
{
    int c;
    char str[]="Cprogramming";
    for(c=1; c<=12; c++)
    {
        printf("%-12.*s\n",c,str);
    }
    for(c=12; c>=1; c--)
    {
        printf("%-12.*s\n",c,str);
    }
    return 0;
}
