#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n=0,sum=0,i;
    int *ptr=NULL, *temp=NULL;
    printf("Enter value of N [1-10]: ");
    scanf("%d",&n);
    ptr=(int *)malloc(n * sizeof(int));
    if(ptr==NULL)
    {
        printf("Unable to allocate memory space. Program terminated!!!");
        return -1;
    }
    else
    {
        printf("Enter %d integer(s) below \n",n);
        for(i=0,temp=ptr; i<n; i++,temp++)
        {
            printf("Enter %d : ",i+1);
            scanf("%d",&*temp);///scanf("%d",temp);
            sum+= (*temp);
        }
        printf("The sum : %d\n",sum);
        free(ptr);
    }
    return 0;
}
