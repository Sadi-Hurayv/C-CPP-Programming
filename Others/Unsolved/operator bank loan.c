#define MAX_LOAN 6000
#include<stdio.h>
int main()
{
    int m, l, loan1, loan2, sancloan;
    printf("How many month ago you took the last loan? \t Ans : ");
    scanf("%d",&m);
    if(m<6)
        {
            printf("You can't take any loan. ");
        }
    printf("The number of pending loan : ");
    scanf("%d",&l);
    printf("\n\n");
     if(l<2)
        {
          if(l=1)
            {
               printf("Enter the amount of the first loan :");
               scanf("%d",&loan1);
               printf("Enter the amount of the loan you want :");
               scanf("%d",&loan2);
               sancloan=(loan1+loan2>MAX_LOAN) ? (MAX_LOAN-loan1) : loan2;
               printf("\n\n");
               printf("Loan pending :%d \n",loan1);
               printf("Requested amount of the loan :%d \n",loan2);
               printf("The amount of the sanctioned loan :%d ",sancloan);


        }
          else
            {
               printf("Enter the amount of the loan you want :");
               scanf("%d",&loan2);
               loan1=0;
               sancloan=(loan2>MAX_LOAN) ? MAX_LOAN : loan2;
               printf("\n\n");
               printf("Loan pending :%d \n",loan1);
               printf("Requested amount of the loan :%d \n",loan2);
               printf("The amount of the sanctioned loan :%d ",sancloan);


        }

        }

      else
      {
          printf("You can't take any loan. ");

      }

}
