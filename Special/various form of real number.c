#include<stdio.h>
int main()
{
    float x, y;
    scanf("%f%f",&x,&y);

    printf("%08.2f\n",98.7654);
    printf("%10.2e\n",98.765);
    printf("%11.4e\n",-98.7654);
    printf("%12.4e\n",-98.7654);
    printf("%13.4e\n",-98.7654);
    printf("%14.4e\n",-98.7654);
    printf("%10.4e\n",-98.7654);
    printf("%-10.2e\n",98.7654);
    printf("%e\n",98.76);
    printf("%*.*f\n",7,2,98.7654);
    return 0;
}
