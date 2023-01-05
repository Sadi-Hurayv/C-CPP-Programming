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
    printf("Enter e.e_no, e.e_name, e.e_sal respectively below:\n");
    scanf("%d %s %f",&e.e_no,&e.e_name,&e.e_sal);
    printf("e.e_no :%d \ne.e_name :%s \ne.e_sal :%.2f \n",e.e_no,e.e_name,e.e_sal);
    printf("sizeof(e) :%d \nsizeof(e.e_no) :%d \nsizeof(e.e_name) :%d \nsizeof(e.e_sal) :%d",sizeof(e),sizeof(e.e_no),sizeof(e.e_name),sizeof(e.e_sal));
}
