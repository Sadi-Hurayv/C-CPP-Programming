#include<stdio.h>
int main()
{
    for(int i=0; i<50; i++)
    {
        printf("%d & %d = %d\n",i,i+1,i&i+1);
    }
    return 0;
}
