#include<stdio.h>
int main()
{
    int num, i, j, swa;
    float mid;
    printf("Enter the number of items :");
    scanf("%d",&num);
    float arr[num];
    printf("Enter the %d numbers below :\n",num);
    for(i=0; i<num; i++)
    {
        scanf("%f",&arr[i]);
    }

    ///sorting
    for(i=0; i<num-1; i++)
    {
        for(j=0; j<num-1-i; j++)
        {
           if(arr[j+1]<arr[j])
           {
               swa=arr[j+1];
               arr[j+1]=arr[j];
               arr[j]=swa;
           }
        }
    }

    printf("The sorting order is :");

    for(i=0; i<num; i++)
    {
        printf("%.3f ",arr[i]);
    }
    if(num%2==0)
    {
        mid=((arr[(num/2)-1]+arr[((num/2)+1)-1])/2);
    }
    else
    {
        mid=arr[((num+1)/2)-1];
    }
    printf("\nThe median is : %.3f",mid);
    return 0;
}
