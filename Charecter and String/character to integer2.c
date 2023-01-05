#include<stdio.h>
int main()
{
    char ch1='A', ch2='a';

    //printf("Enter 2 character.\n");
    //ch1=getchar();
    //printf("%c=%d",ch1,ch1);
    //ch2=getchar();
    //printf("%c=%d",ch2,ch2);
    ///Can't use 2 getchar().

    printf("%c+%c = %d\n",ch1,ch2,ch1+ch2);
    printf("%c-%c = %d\n",ch1,ch2,ch1-ch2);
    printf("%c*%c = %d\n",ch1,ch2,ch1*ch2);

    ///Output will be the ASCI value.

    return 0;
}

