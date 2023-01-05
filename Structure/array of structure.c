#include<stdio.h>
struct student
{
    char name[50];
    char id[50];
    int score;
};
int main()
{
    struct student stdArr[3];
    int i;
    for(i=0; i<3; i++)
    {
        printf("Enter detail of student %d\n",i+1);
        printf("Enter Name: ");
        scanf("%s",&stdArr[i].name);
        printf("Enter ID: ");
        scanf("%s",&stdArr[i].id);
        printf("Enter Score: ");
        scanf("%d",&stdArr[i].score);
    }
    for(i=0; i<3; i++)
    {
        printf("\nStudent %d Detail:\n", (i+1));

        printf("Name: %s\n", stdArr[i].name);
        printf("ID: %s\n", stdArr[i].id);
        printf("Score: %d\n", stdArr[i].score);
    }
    return 0;
}
