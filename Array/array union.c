#include<stdio.h>
int main()
{
    int n1, n2, i, j, k, swa, countc=0, countd=0;

    printf("Enter the number of the elements of the first set :");
    scanf("%d",&n1);

    printf("Enter the number of the elements of the second set :");
    scanf("%d",&n2);

    int s1[n1], s2[n2], s[n1+n2], sc[n1], sd[n1+n2];/* for sc it could be sc[n2]*/

    printf("Enter the the elements of the first set randomly below.\n");
    for(i=0; i<n1; i++)
    {
        scanf("%d",&s1[i]);
    }

    printf("Enter the the elements of the second set randomly below.\n");
    for(j=0; j<n2; j++)
    {
        scanf("%d",&s2[j]);
    }


///This is for common elements and a part of different elements.

    for(i=0; i<n1; i++)
    {
        int count=0;
        for(j=0; j<n2; j++)
        {
            if(s1[i]==s2[j])
            {
                sc[countc]=s1[i];
                countc++;
                break;
            }
            else
            {
               count++;
            }
        }
        if(count==n2)
            {
                sd[countd]=s1[i];
                countd++;
            }
    }


///This is for another part of different elements.

    for(i=0; i<n2; i++)
    {
        int count=0;
        for(j=0; j<n1; j++)
        {
            if(s2[i]!=s1[j])
            {
               count++;
            }
        }
        if(count==n1)
        {
            sd[countd]=s2[i];
            countd++;
        }
    }


    //printf("\n%d",countc);
    //printf("\n%d\n",countd);

///Getting combined the common and different elements.

    for(i=0; i<countd+countc; i++)
    {
        if(i<countc)
        {
            s[i]=sc[i];
        }
        else if(i<countd+countc)
        {
            s[i]=sd[i-countc];
        }
    }

    /*for(i=0; i<countc; i++)
    {
        printf("%d\t",sc[i]);
    }

    printf("\n");

     for(i=0; i<countd; i++)
    {
        printf("%d\t",sd[i]);
    }

    printf("\n");

    for(i=0; i<countd+countc; i++)
    {
        printf("%d\t",s[i]);
    }*/



///Sorting

    for(i=0; i<countc+countd-1; i++)
    {
        for(j=0; j<countc+countd-i-1; j++)
        {
            if(s[j]>s[j+1])
            {
                swa=s[j+1];
                s[j+1]=s[j];
                s[j]=swa;
            }
        }
    }


    printf("The union set is below.\n");

     for(i=0; i<countc+countd; i++)
    {
        printf("%d\t",s[i]);
    }

    return 0;
}
