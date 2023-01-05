#include<stdio.h>
#include<string.h>

int main()
{
    char ch[23], temp;
    char ch2[][23] = {0};
    int i, j, c = 0, len = 0;
    for(i=0; ; i++)
    {
        gets(ch);

        if (ch[0]=='#')
            break;

        for (int i = 0; ch[i] != '\0'; i++)
            len++;

        if(ch[0]=='a' || ch[0]=='e' || ch[0]=='i' || ch[0]=='o' || ch[0]=='u')
        {
            ch[len]='a';
            ch[len+1]='y';
            ch[len+2]='\0';
        }
        else
        {
            temp=ch[0];
            for(j=0; j<=len-1; j++)
            {
                ch[j]=ch[j+1];
            }
            ch[len-1]=temp;
            ch[len]='a';
            ch[len+1]='y';
            ch[len+2]='\0';

        }
        printf("%s", ch);
        strcpy(ch2[c], ch);
        //ch = NULL;
        c++;
    }

    printf("\n%d\n", c);
    for (int i = 0; i < c; i++)
    {
        puts(ch2[i]);
    }
    return 0;
}
