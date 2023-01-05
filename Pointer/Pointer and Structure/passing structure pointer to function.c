#include<stdio.h>

struct Emp
{
    int e_no;
    char e_name[20];
    float e_sal;
};

void get_detail(struct Emp *ptr);
void display_detail(struct Emp *ptr);
///void get_detail(struct Emp *);
///void display_detail(struct Emp *);

int main()
{
    struct Emp e[3];
    get_detail(e);///same as &e
    display_detail(e);///same as &e
    return 0;
}

void get_detail(struct Emp *ptr)
{
    for(int i=0; i<3; i++,ptr++)
    {
        printf("Employee %d detail\n",i+1);
        printf("Enter employee no: ");
        scanf("%d",&ptr->e_no);///(*ptr).e_no
        printf("Enter employee name: ");
        scanf("%s",&ptr->e_name);///(*ptr).e_name
        printf("Enter mployee salary: ");
        scanf("%f",&ptr->e_sal);///(*ptr).e_sal
        printf("\n");
    }
    printf("\n\n");
}

void display_detail(struct Emp *ptr)
{
    for(int i=0; i<3; i++,ptr++)
    {
        printf("Employee %d\n",i+1);
        printf("Employee e_no : %d\n",ptr->e_no);///(*ptr).e_no
        printf("Employee e_name : %s\n",ptr->e_name);///(*ptr).e_name
        printf("Employee e_sal : %f\n\n",ptr->e_sal);///(*ptr).e_sal
    }
}
