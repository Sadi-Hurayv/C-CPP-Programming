#include<stdio.h>
printline()
{
    for(int i=0; i<40; i++)
        printf("-");
    printf("\n");
}

int main()
{
    printline();
    printf("This illustrate the use of C functions.\n");
    printline();
}
