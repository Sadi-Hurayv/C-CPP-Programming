#include<stdio.h>
int main()
{
   char arr[50], count=0, i;
    printf("Enter a string :");
    gets(arr);
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    for(i=count-1;i>=0;i--)
    {
        printf("%c",arr[i]);
    }
    return 0;

}
