#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character below.\n");
    scanf("%c",&ch);
    printf("%c\n%3c\n%5c\n%3c\n%c\n",ch,ch,ch,ch,ch);

    return 0;
}
