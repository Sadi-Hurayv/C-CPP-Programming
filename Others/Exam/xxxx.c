#include<stdio.h>
int main()
{
    int max, min, count = 0;
    printf("Enter lowest ");
    scanf("%d", &min);
    printf("Enter highest ");
    scanf("%d", &max);

    for (int i = min; i <= max; i++)
    {
        count = 0;
        for (int j = 1; j <= max; j++)
        {
            if (i%j == 0)
            {
                count++;
            }
        }

        if (count ==2) printf ("%d ", i);
    }

    return 0;
}
