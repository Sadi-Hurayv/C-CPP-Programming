#include<stdio.h>
#define STUDENTS 1
#define ITEMS 4
int main()
{
    char key[ITEMS], response[ITEMS];
    int i, j, student, inc[ITEMS];
    printf("Input key to the items below :\n");
    for(i=0; i<ITEMS; i++)
    {
        scanf("%c",&key[i]);
    }
    printf("\n\n");

    for(student=1; student<=STUDENTS; student++)
    {
        int incount=0, count=0;
        printf("Input response of the student - %d\n",student);
        for(i=0;i<ITEMS;i++)
    {
        scanf("%c",&response[i]);
    }
    for(i=0;i<ITEMS;i++)
    {
        printf("%c",response[i]);
    }

        for(i=0; i<ITEMS; i++)
        {
            if(response[i]==key[i])
                count++;
            else
            {
                inc[incount]=i+1;
                incount++;
            }
        }
        printf("Student - %d\n",student);
        printf("Score is %d out of 25.\n",count);
        printf("Response to the following items are wrong \n");
        if(incount==0)
            printf("NULL");
        else
        {
            for(i=0; i<incount; i++)
            {
                printf("%d ",inc[i]);
            }
        }
        printf("\n\n");
        for(i=0; i<ITEMS; i++)
        {
            printf("%c ",key[i]);
        }
        printf("\n");
        for(i=0; i<ITEMS; i++)
        {
            printf("*%c",response[i]);
        }
    }
    return 0;
}
