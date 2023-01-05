#include<stdio.h>
int main()
{
    int i, j;
    int arr[3][3]= {{1,2,3},{4,5,6},{7,8,9}},*p;
    p=&arr[0][0];
    printf("Value \t Address\n");
    for(i=0; i<3*3; i++)///i< row*col
    {
        printf("%d \t %u\n",*(p+i), p+i);
    }
    printf("\n\nValue \t Address \t Value \t Address \t Value \t Address \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d \t %u \t ",arr[i][j],(p + i*3 + j));
        }
        printf("\n");
    }
    return 0;
}
