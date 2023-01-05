#include<stdio.h>
struct student
{
    char name[50];
    char id[50];
    int score;
    struct
    {
        char district[50];
        char devision[50];
        int holdnum;
    }address;
};
int main()
{
    struct student std[3];
    int i;
    for(i=0; i<3; i++)
    {
        printf("Enter the detail of student : %d\n",i+1);
        printf("Enter name : ");
        scanf("%s",&std[i].name);
        printf("Enter id : ");
        scanf("%s",&std[i].id);
        printf("Enter score : ");
        scanf("%s",&std[i].score);
        printf("Enter district : ");
        scanf("%s",&std[i].address.district);
        printf("Enter devision : ");
        scanf("%s",&std[i].address.devision);
        printf("\n\n");
    }
    for(i=0; i<3; i++)
    {
        printf("The detail of student : %d\n",i+1);
        printf("Name : %s\n",std[i].name);
        printf("Id : %s\n",std[i].id);
        printf("Score : %d\n",std[i].score);
        printf("District : %s\n",std[i].address.district);
        printf("Devision : %s\n\n\n",std[i].address.devision);

    }
    return 0;
}
