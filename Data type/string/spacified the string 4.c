#include<stdio.h>
int main()
{
    char address[20];
    printf("Enter address\n\n");
    scanf("%[^\n]",address);
    printf("%s\n",address);
    printf("%20s\n",address);
    printf("%20.10s\n",address);
    printf("%.5s\n",address);
    printf("%-20.10s\n",address);
    printf("%5s\n",address);
    return 0;
}


