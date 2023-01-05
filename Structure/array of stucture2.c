#include<stdio.h>
struct student
{
    int sub1, sub2, sub3, total;
};

int main()
{
    struct student std[3]={{45,67,81,0},{75,53,69,0},{57,36,71,0}};
    struct student total={0,0,0,0};

    for(int i=0; i<3; i++)
    {
        std[i].total=std[i].sub1+std[i].sub2+std[i].sub3;

        total.sub1+=std[i].sub1;
        total.sub2+=std[i].sub2;
        total.sub3+=std[i].sub3;
        total.total+=std[i].total;
        //printf("%d %d %d\n",total.sub1,total.sub2,total.sub3);
    }
    for(int i=0; i<3; i++)
    {
        printf("\nStudent %d total : %d",i+1,std[i].total);
    }
    printf("\n");
    printf("\nSubject 1 total : %d",total.sub1);
    printf("\nSubject 2 total : %d",total.sub2);
    printf("\nSubject 3 total : %d",total.sub3);
    printf("\n\nGrand total : %d",total.total);

    return 0;
}
