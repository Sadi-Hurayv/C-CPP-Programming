#include<stdio.h>
int main()
{
    char name[]={'A','D','I','\0'};
    //gets(name);
    int i=0;
    while(name[i]!='\0')
    {
        printf("%c",name[i]);
        i++;
    }

    return 0;
}
