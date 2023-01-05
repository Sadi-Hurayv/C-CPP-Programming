#include<stdio.h>
#include<math.h>
int main()
{
    float x1, x2, y1, y2, z;

    printf("Enter the initial point : (x1,y1)\n");
    scanf("%f%f",&x1,&y1);
    printf("Enter the final point : (x2,y2)\n");
    scanf("%f%f",&x2,&y2);
    z=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("The distance of the two point : %f",z);



}
