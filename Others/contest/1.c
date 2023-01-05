#include<stdio.h>
#include<string.h>
int main()
{
    int t, i, j, wrong1, wrong2, wrong3, f;
    char one[15]={'o','n','e'}, two[15]={'t','w','o'}, three[15]={'t','h','r','e','e'}, in[15];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        wrong1=0;
        wrong2=0;
        wrong3=0;
        scanf("%s",&in);
        for(j=0; j<strlen(in), j<strlen(one); j++)
        {
            if(in[j]!=one[j])
            {
                wrong1++;
            }

        }
        if(wrong1<2)
            {
                printf("1\n");
                continue;
            }


        for(j=0; j<strlen(in), j<strlen(two); j++)
        {
            if(in[j]!=two[j])
            {
                wrong2++;
            }

        }
        if(wrong2<2)
            {
                printf("2\n");
                continue;
            }


        for(j=0; j<strlen(in), j<strlen(three); j++)
        {
            if(in[j]!=three[j])
            {
                wrong3++;
            }

        }
        if(wrong3<2)
            {
                printf("3\n");
                continue;
            }
    }
}
