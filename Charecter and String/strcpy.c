#include<stdio.h>
#include<string.h>
int main()
{
    char stri1[20]="DHAKA", stri2[20]="DELHI", stri3[20]="SYLET", stri4[20];

    strcpy(stri1,stri2);
    printf("str1 = %s\n",stri1);
    ///now stri1=DELHI

    strncpy(stri2,stri3,3);
    printf("str2 = %s\n",stri2);
    ///now stri2=SYLHI

    strcpy(stri4,"NOAKHALI");
    printf("str4 = %s\n",stri4);
    ///By strcpy we can assign a string to a char variable. (insted of scanf or gets() or getchar() )

    return 0;
}

