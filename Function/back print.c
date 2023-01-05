#include<stdio.h>
void back_print(void)
{
    char ch;
    if((ch=getchar())!='\n')
        back_print();
    putchar(ch);
}

int main()
{
    printf("Enter a text line=");
    back_print();
}
