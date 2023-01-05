#include<stdio.h>
struct student
{
    char name[50];
    char id[50];
    int score;
};
void display(struct student std);
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

        display(stdArr[i]);
    }
    return 0;
}
void display(struct student std)
{
    printf("Name: %s\n", std.name);
    printf("ID: %s\n", std.id);
    printf("Score: %d\n", std.score);
}

