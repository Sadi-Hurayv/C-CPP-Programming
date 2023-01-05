#include<stdio.h>
int main()
{
    char address[100];
    printf("Enter address\n");
    scanf("%[^abc]",address);//if any of the character appear the reading will be terminate.
    printf("%-80s\n\n",address);
    return 0;
}


