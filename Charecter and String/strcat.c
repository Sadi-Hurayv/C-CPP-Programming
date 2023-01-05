#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="Very ", str2[20]="Good", str3[20]=" Bad", str4[20]="Very ", str5[20]=" GIRLS AND BOYS";

    strcat(str1,str2);
    printf("str1 = %s\n",str1);

    strcat(str2," BOY");
    printf("str2 = %s\n",str2);

    ///Nesting strcat.
    strcat(strcat(str4,str2),str3);
    printf("str4 = %s",str4);

    strncat(str3,str5,5);
    printf("\nstr3 = %s",str3);

    return 0;
}
