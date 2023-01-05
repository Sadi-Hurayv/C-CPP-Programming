#include<stdio.h>
int main()
{
    int row, col,hcol, sp, hsp2, hsp3;
    for(row=1, hsp2=5; row<=12, hsp2>0; row++, hsp2-=2)
    {
        if(row<4)
        {

            for(sp=row; sp<=3; sp++)
            {
                printf("  ");
            }
            for(col=row*2; col>0; col--)
            {
                printf(" o");
            }
            for(sp=hsp2; sp>0; sp--)
            {
                printf("  ");
            }
            for(col=row*2; col>0; col--)
            {
                printf(" o");
            }

            printf("\n");
        }
    }

    for(row=1; row<=2; row++)
    {
        for(col=1; col<=15; col++)
        {
            printf(" o");
        }
        printf("\n");
    }

    for(row=1, hcol=13; row<=7, hcol>0; row++, hcol-=2)
    {
        for(sp=row; sp>0; sp--)
        {
            printf("  ");
        }
        for(col=hcol; col>0; col--)
        {
            printf(" o");
        }
        printf("\n");
    }

}
