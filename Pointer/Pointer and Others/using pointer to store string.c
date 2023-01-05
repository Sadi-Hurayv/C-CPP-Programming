#include<stdio.h>
int main()
{
    char *ptrstr="Hello";
//    printf("*ptrstr : %s\n",*ptrstr);
    printf("*ptrstr \t ptrstr \t &ptrstr\n");
    while(*ptrstr!='\0')
    {
        printf("%c \t\t %u \t %u\n",*ptrstr,ptrstr,&ptrstr);
        ptrstr++;
    }
    return 0;
}
