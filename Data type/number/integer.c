#include<stdio.h>
int main()
{
    int a,b,c,p,q,r,x,y,z;

    printf("Enter three integer number below.\n");
    scanf("%d%*d%d",&a,&b,&c);
    printf("%d\t%d\t%d\n\n",a,b,c);

    printf("Enter two 4-digit integer number below.\n");
    scanf("%2d%4d",&x,&y);
    printf("%d\t%d\n\n",x,y);

    printf("Enter two integer number below.\n");
    scanf("%d%d",&a,&x);
    printf("%d\t%d\n\n",a,x);

    printf("Enter a 9-digit integer number below.\n");
    scanf("%3d%4d%3d",&p,&q,&r);
    printf("%d\t%d\t%d\n\n",p,q,r);

    printf("Enter two 3-digit integer number below.\n");
    scanf("%d%d",&x,&y);
    printf("%d\t%d\n\n",x,y);

    return 0;
}
