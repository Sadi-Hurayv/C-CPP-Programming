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
    struct Emp e;
    struct Emp *ptr;
    ptr=&e;
    scanf("%d %s %f",&ptr->e_no,&ptr->e_name,&ptr->e_sal);
    printf("%d %s %f %d %d %d %d",e.e_no,e.e_name,e.e_sal,sizeof(e),sizeof(e.e_no),sizeof(e.e_name),sizeof(e.e_sal));
    return 0;
}
