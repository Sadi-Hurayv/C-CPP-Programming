#include<stdio.h>
int main()
{
    int num, i, j, count;
    printf("Enter the number of the students :");
    scanf("%d",&num);
    int marks[num];

    ///For marks input.;
    printf("Enter the numbers:\n");
    for(i=0; i<num; i++)
    {
        scanf("%d",&marks[i]);
    }


    ///Checking frequency.
    int high, low;
    printf("Range\t\tFrequency");

    for(i=1, high=9, low=0; i<=11; i++, high=high+10, low=low+10)
    {
        if(high>100) high=100;
        count=0;

        for(j=0; j<num; j++)
        {
            if(marks[j]>=low && marks[j]<=high)
            {
                count++;
            }
        }
       printf("\n%d - %d\t\t%d\n",low,high,count);
    }
    return 0;

}
