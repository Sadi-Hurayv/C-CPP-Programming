#include<stdio.h>
#include<string.h>
int main()
{
    int pos;
    char str1[25]="BANGLADESH", str2[25]="DESH";
    if(strstr(str1,str2)!=NULL) printf("st2 is the substring of str1.");
    else
        printf("str2 is not found in str1");
    //printf("%d",strstr(str1,"DESH"));
    return 0;
}
