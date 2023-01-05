#include<stdio.h>
struct Emp
{
    int e_no;
    char e_name[20];
    float e_sal;
};
int main()
{
//    struct Emp e={1001,"Shuvra",50000};
    struct Emp e[3];
    struct Emp *ptr=NULL;
    ptr=e;
    for(int i=0; i<3; i++,ptr++)
    {
        printf("Employee %d detail\n",i+1);
        printf("Enter employee no: ");
        scanf("%d",&ptr->e_no);
        printf("Enter employee name: ");
        scanf("%s",&ptr->e_name);
        printf("Enter mployee salary: ");
        scanf("%f",&ptr->e_sal);

    }

    ptr=e;///Most important part

    for(int i=0; i<3; i++,ptr++)
    {
        printf("Employee %d \n",i+1);
        printf("Employee no: %d\n",ptr->e_no);
        printf("Employee name: %s\n",ptr->e_name);
        printf("Employee salary: %f\n",ptr->e_sal);
    }
    printf("The size of e is %d\n",sizeof(e));
    return 0;
}

