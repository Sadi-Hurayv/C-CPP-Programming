#include<stdio.h>
float get_number();
int main()
{
    printf("Enter a number : ");
    float m=get_number();
    printf("%f",m);
}
float get_number()
{
    float number;
    scanf("%f",&number);
    return (number); ///Default return type is integer.
                     ///To pass another type of data in return we have to mention the return type in function declaration.

}
