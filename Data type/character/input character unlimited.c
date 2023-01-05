#include<stdio.h>
int main()
{
    char ch;
    ch=' ';
    while(ch != '\n')
    {
        ch=getchar();
    }
    printf("%c",ch);

    return 0;
}
