#include<stdio.h>
int main()
{
    int c=0;
    char line[80], ch;
    printf("Enter a text.")

    do
    {
        ch=getchar();
        line[c]=ch;
        c++;
    }
    while(ch!='\n');

    c=c-1;
    line[c]='\0';

    printf("\n %s \n",line);

    return 0;
}
