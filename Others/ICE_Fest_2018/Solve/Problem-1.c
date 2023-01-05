#include <stdio.h>
#include <string.h>

int main()
{
    char str[20], result[20];
    int c = 0;
    for (int i = 0 ; str[0] != '#'; i++)
    {
        scanf("%s", str);
        switch(str[0]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                result[i] = strcpy(str, "ay");
                c++;
                break;
            default:
                //result[i] =

                break;
        }
    }

    for (int i = 0; i < c; i++)
    {
        printf("%s", result[i]);
    }
    return 0;
}
