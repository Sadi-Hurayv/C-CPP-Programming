#include<stdio.h>
int main()
{
    float hight, weight;
    int i, sum;
    sum=0;
    for(i=1;i<=10;i++)
    {
        printf("Enter the hight(cm) of boy :\t");
        scanf("%f",&hight);
         printf("Enter the weight of the same boy :");
          scanf("%f",&weight);
           printf("\n");
        if(hight>170&&weight<50)
            sum=sum+1;
    }
    printf("The number of boys with hight>170cm and weight<50kg is %d",sum);
}
