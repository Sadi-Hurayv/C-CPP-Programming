#include<stdio.h>
//int tostring();
double tostring();
int main()
{
//    int NUM;
    double NUM;
    char ch[100];
    scanf("%s",&ch,printf("Enter a number (in STRING) : "));
    NUM=tostring(ch);
    printf("The number is : %lf\n",NUM);
    return 0;
}

//int tostring(char ch[])
double tostring(char ch[]) /// For floating point number
{
//    int NUM;
    double NUM, frac;
    int sign, tracker, i, flag;

    /// Handel the sign of a number
    if(ch[0]=='-')
        sign=-1;
    else
        sign=1;

    ///Handel the track of the given string
    if(sign==-1)
        tracker=1;
    else
        tracker=0;

    ///Handel the main operation
    NUM=0;
    flag=0;
    frac=1;
    for(i=tracker; ch[i]!='\0'; i++)
    {
        if(flag==1)
        {
            frac=frac*0.1; ///Fraction part increase
            NUM=NUM+((ch[i]-'0')*frac);
        }
        else if(ch[i]!='.') ///To handel non-floating point part
            NUM=(NUM*10)+(ch[i]-'0');

        if(ch[i]=='.')///To handel floating poit
            flag=1;
    }

    NUM=NUM*sign;

    return NUM;
}
