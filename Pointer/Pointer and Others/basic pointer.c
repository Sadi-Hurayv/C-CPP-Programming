#include<stdio.h>
int main()
{
    int num, numb1, numb2;
    int *ptr;
    ptr=&num;
    printf("Enter the value of num :");
///    scanf("%d",&num);
///    scanf("%d",&*ptr);
    scanf("%d",&(*ptr));
    printf("num = %d\n",num);
    printf("&num = %u\n",&num);
    printf("ptr = %u\n",ptr);
    printf("&ptr = %u\n",&ptr);
    printf("*ptr = %d\n",*ptr);

    printf("\nSome exception :\n");
    printf("ptr-ptr = %u\n",(ptr)-(ptr));
    printf("ptr+1 = %u\n",ptr+1);
    printf("ptr+2 = %u\n",ptr+2);
    printf("(ptr+2)-(ptr+1) = %u\n",(ptr+2)-(ptr+1));
    printf("(ptr+1)-(ptr+2) = %u\n",(ptr+1)-(ptr+2));
    numb1=*ptr;
    printf("After (numb1=*ptr;) numb1 = %d\n",numb1);
    numb2=*&num;
    printf("After (numb2=*&num;) numb2 = %d\n",numb2);
    return 0;
}
