#include<stdio.h>
int main()
{
    int age, count=0, i;
    printf("Enter the age of 100 person.\n");
    for(i=1;i<=100;i++)
    {
        printf("%d.  ",i);
        scanf("%d",&age);
        if(age<=60&&age>=50)
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    printf("\nThe number of the persons whose age is between 50 and 60 is %d. ",count);
}
