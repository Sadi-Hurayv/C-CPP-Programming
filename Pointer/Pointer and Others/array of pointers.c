#include<stdio.h>
int main()
{
    int num=5, score=10, run=15, goal=20;
    int *ptr[4];
    ptr[0]=&num;
    ptr[1]=&score;
    ptr[2]=&run;
    ptr[3]=&goal;
    printf("The value of num, score, run, goal are respectively ");
    for(int i=0; i<4; i++)
    {
        printf("%d ",*ptr[i]);
    }
    return 0;
}
