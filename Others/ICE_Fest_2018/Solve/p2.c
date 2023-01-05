#include<stdio.h>
#include<string.h>
int main()
{
char ar[100];
int i,l;
scanf("%s",ar);
while(ar[0]!='#')
{

l=strlen(ar);
if(ar[0]=='a'||ar[0]=='e'||ar[0]=='i'||ar[0]=='o'||ar[0]=='u')
{
   ar[l]='a';
   ar[l+1]='y';
   ar[l+2]='\0';
   printf("%s\n",ar);

}
else
{
    ar[l]=ar[0];
    ar[l+1]='a';
    ar[l+2]='y';
    ar[l+3]='\0';
    i=1;
    while(ar[i]!='\0')
    {
       printf("%c",ar[i]);
       i++;
    }
    printf("\n");

}

scanf("%s",ar);
}

}

