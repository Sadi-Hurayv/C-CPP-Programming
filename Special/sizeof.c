#include<stdio.h>
int main()
{
    int i;
    long int li;
    short int si;
    char c;
    float f;
    //long float lf;
    double d;
    long double ld;
    printf("Character contain %d bytes.\n",sizeof(c));
    printf("Integer contain %d bytes.\n",sizeof(i));
    printf("Long integer contain %d bytes.\n",sizeof(li));
    printf("Short integer contain %d bytes.\n",sizeof(si));
    printf("Float contain %d bytes.\n",sizeof(f));
    //printf("Long float contain %d bytes.\n",sizeof(lf));
    printf("Double contain %d bytes.\n",sizeof(d));
    printf("Long double contain %d bytes.",sizeof(ld));

    return 0;

}

