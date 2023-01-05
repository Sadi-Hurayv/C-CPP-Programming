#include<stdio.h>
int main()
{
    int anum, fnum, first, mid, last, count=0;

    printf("Enter the number of the elements :");
    scanf("%d",&anum);
    int  aray[anum], pos[anum];

    printf("Enter the elements below.\n");

    for(int i=0; i<anum; i++)
    {
        scanf("%d",&aray[i]);
    }

    printf("Enter the number you want to find :" );
    scanf("%d",&fnum);

    first=0;
    last=anum-1;

    //printf("First\tMid\tLast");

    while(first<=last)
    {
        mid=(first+last)/2;
        //printf("\n%d\t%d\t%d",first,mid,last);
        if(fnum<aray[mid])
            last=mid-1;
        else if(fnum>aray[mid])
            first=mid+1;
        else
        {
            printf("\nposition : %d",mid+1);
            break;
        }

        //mid=(first+last)/2;
        if(first>last)
            printf("Position not found!!");
    }

    return 0;
}

