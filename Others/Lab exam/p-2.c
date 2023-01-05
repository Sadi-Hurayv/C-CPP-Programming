#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int len, i, j, alpha=0, digit=0, speci=0;
    char str[100];
    printf("Input the string: ");
    gets(str);
    len=strlen(str);
    //printf("\n%d",len);
    for(i=0; i<=len; i++)
    {
        if(isalpha(str[i])>0)
        {
            alpha++;
        }
        if(isdigit(str[i])>0)
        {
            digit++;
        }
        if(ispunct(str[i])>0||isspace(str[i])>0)
        {
            speci++;
        }
    }
    printf("Number of Alphabet in the string is :%d",alpha);
    printf("\nNumber of Digit in the string is :%d",digit);
    printf("\nNumber of Special characters in the string is :%d",speci);
    return 0;
}
