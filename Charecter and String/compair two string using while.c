#include<stdio.h>
int main()
{
    char str1[30], str2[30];
    //char str1[6]="DHAKA", str2[6]="DHAKA";
    int i;
    printf("Enter two string.\n");

    //scanf("%[^\n]",str1);
    //scanf("%[^\n]",str2);
    ///Why can't use 2 times [^\n].

    scanf("%s",str1);
    scanf("%s",str2);

    i=0;
    while(str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='\0')
    {
        i++;
    }
    if(str1[i]=='\0' && str2[i]=='\0')
        {
            printf("String are equal.");
        }
    else
        printf("String are not equal.");
    return 0;
}
