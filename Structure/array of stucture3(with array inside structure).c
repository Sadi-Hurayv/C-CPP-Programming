#include<stdio.h>
struct student
{
    int sub[3],total;
};
int main()
{
    struct student std[3]={45,67,81,0,75,53,69,0,57,36,71,0};
    struct student total={0,0,0,0};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            std[i].total+=std[i].sub[j];
            total.sub[j]+=std[i].sub[j];
        }
        total.total+=std[i].total;
    }
    for(int i=0; i<3; i++)
    {
        printf("Student %d total : %d\n",i+1,std[i].total);
    }
    printf("\n");
    for(int j=0; j<3; j++)
    {
        printf("Subject %d total : %d\n",j+1,total.sub[j]);
    }
    printf("\nGrand total : %d\n",total.total);
    return 0;
}
