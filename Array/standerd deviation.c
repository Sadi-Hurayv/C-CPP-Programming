#include<stdio.h>
#include<math.h>
int main()
{
    int i, j, num;
    float m, sd, swa, sum=0, privar=0, finvar;
    printf("Enter the number of the numbers : ");
    scanf("%d",&num);
    float arr[num];
    printf("Enter the numbers below :\n");
    for(i=0; i<num; i++)
    {
        scanf("%f",&arr[i]);
        sum=sum+arr[i];
    }
    m=sum/num;
    for(i=0; i<num; i++)
    {
        privar=privar+(arr[i]-m)*(arr[i]-m);
    }
    finvar=privar/num;
    sd=sqrt(finvar);
    printf("\nThe mean is : %f",m);
    printf("\n   The standard deviation is : %f",sd);

    return 0;
}
