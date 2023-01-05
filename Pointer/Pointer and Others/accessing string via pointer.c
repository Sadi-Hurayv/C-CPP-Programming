#include<stdio.h>
int main()
{
    char ch[9]="NOAKHALI";
    char *ptr;
    ptr=ch;
//    int i=0;
    printf("*ptr \t ptr \t\t &ptr\n");
    while(*ptr!='\0')
    {
        printf("%c \t %u \t %u\n",*ptr,ptr,&ptr);
        ptr++;
//        i++;
    }

    return 0;
}
