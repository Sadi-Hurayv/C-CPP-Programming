#include<stdio.h>
#include<stdlib.h>
int main()
{
    char year[6];
    int number;
    printf("Enter your birth year.\n");
    gets(year);
    number=atoi(year);
    printf("%s = %d\n",year,number);

    ///(atoi) converts the string(contained in number) to it's numeric equivalent.
    ///For example [string "1998" -->  numeric value 1998].

    return 0;
}

