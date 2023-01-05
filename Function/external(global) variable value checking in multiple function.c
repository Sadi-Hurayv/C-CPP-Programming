#include<stdio.h>
fun1(void);
fun2(void);
fun3(void);
///After run the program 1 time, delete the comment notation one by one(activate the below statements)
/// and run the program again(after activate one statement).
int x;
int main()
{
    //x=10;
    printf("X = %d\n",x);///By default global variable hold the value 0(zero).
    printf("X = %d\n",fun1());
    printf("X = %d\n",fun2());
    printf("X = %d\n",fun3());
}

fun1(void)
{
    //int x=2;
    x=x+10;
    //return x;
}

fun2(void)
{
    int x=1;
    return x;
}

fun3(void)
{
    x=x+10;
}


