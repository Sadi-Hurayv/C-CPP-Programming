#include<stdio.h>
int main()
{
    char arr[50]={}, count=0;
    printf("Enter a string :");
    gets(arr);
    //scanf("%[^\n]",&arr);
    /// We can also use scanf("%[^\n]",&arr);


    /// We can also use scanf("%[^\0]",&arr);

        /// In this case (%[^\0]) in input after writing the string
            /// we have to press "Enter"(cursor will go to the new line)
                /// then we have to press "Ctrl+Z" then again "Enter".


    for(int i=0;i<50;i++)
    {
        if(arr[i]!=0)
        {
            count++;
           // printf("%c\n",arr[i]);
        }
    }
    printf("count of %s is %d.",arr,count);
    return 0;
}
