 #include<stdio.h>
int main()
{
    int i, j, z;
    i=5;
    do
    {
            z=i;
            do
            {
              printf(" ");
              z--;
            }
            while(z>0);
            j=5;
            do
            {
              printf("%d",j);
              j--;
            }
            while(j>=i);
            printf("\n");


        i--;

    }
    while(i>0);

}

