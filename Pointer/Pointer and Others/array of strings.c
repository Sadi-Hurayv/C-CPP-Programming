#include<stdio.h>
int main()
{
    char *cityPtr[5] = {
    "Chennai",
    "Kolkata",
    "Mumbai",
    "New Delhi",
    "Kerala"
  };
int r, c;

  // print cities
    //printf("*(cityPtr[r] + c) \t (cityPtr[r] + c) \t sizeof(*(cityPtr[r]+c)) \t &(cityPtr[r]) \t sizeof(*cityPtr)\n");
    printf("*(cityPtr[r] + c) \t (cityPtr[r] + c) \t sizeof(*(cityPtr[r]+c)) \t &(cityPtr[r]) \t sizeof(&(cityPtr[r]))\n");
  for (r = 0; r < 5; r++) {
    c = 0;
    while(*(cityPtr[r] + c) != '\0') {
//        printf("%c \t\t\t %u \t\t %d \t\t\t\t %u \t %d\n", *(cityPtr[r] + c),(cityPtr[r] + c),sizeof(*(cityPtr[r]+c)), &(cityPtr[r]),sizeof(*cityPtr));
        printf("%c \t\t\t %u \t\t %d \t\t\t\t %u \t %d\n", *(cityPtr[r] + c),(cityPtr[r] + c),sizeof(*(cityPtr[r]+c)), &(cityPtr[r]),sizeof(&(cityPtr[r])));

      c++;
    }
    printf("\n\n");
  }
    printf("%d",sizeof(cityPtr));

}
