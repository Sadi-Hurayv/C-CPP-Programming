#include<stdio.h>
#include<ctype.h>
int main()
{
    char character;
    printf("Check your character.\n");
    printf("Press any key :");
    character=getchar();
    if(isalpha(character)>0) printf("The character is a letter.\n");
    if(isdigit(character)) printf("The character is a digit.\n"); // if we do not use (>0) the program will perfectly though.
    if(isalnum(character)>0) printf("The character is alphanumeric.\n");
    if(islower(character)>0) printf("The character is a lower case letter.\n");
    if(isupper(character)>0) printf("The character is a upper case letter.\n");
    if(ispunct(character)>0) printf("The character is a punctuation mark.\n");
    if(isprint(character)>0) printf("The character is printable.\n");
    if(isspace(character)>0) printf("The character is space.\n");
    return 0;

}
