#include<stdio.h>
int main()
{
    char address[100];
    printf("Enter address\n");
    scanf("%[^\n]",address);
    printf("%-80s\n\n",address);
    return 0;
}

