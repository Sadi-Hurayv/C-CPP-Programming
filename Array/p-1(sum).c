#include<stdio.h>
int main()
{
    int num[3], sum=0;
    printf("Input 3 elements in array.\n");
    for(int i=0; i<3; i++)
    {
        printf("element-%d :",i);
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    printf("Sum of all elements stored in the array is : %d",sum);
    return 0;
}
