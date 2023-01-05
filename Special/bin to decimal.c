#include<stdio.h>
#include<string.h>

/// We can  use the code with slightly changed for octal --> decimal and hexadecimal --> decimal
int main()
{
    int ans, i;
    char num[30];
    scanf("%s",&num,printf("Enter the binary number : "));
    ans=0;
    for(i=0; i<strlen(num); i++)
    {
        ans=ans*2;   ///  ans = ans*base
        ans=ans+(num[i]-'0');  ///  ans = ans+(the digit)
    }
    printf("In decimal formate : %d\n",ans);
    return 0;
}
