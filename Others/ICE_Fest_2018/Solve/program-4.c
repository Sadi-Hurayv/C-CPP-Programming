#include <stdio.h>

int main()
{
    int t, arrC[30], arrP[30], c = 0, icount = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int count, price, temp = 0;
        int total = 0;
        scanf("%d%d", &count, &price);

        icount = count;
        for (int j = 0; j < count; j++)
        {
            int num;
            scanf("%d", &num);
            total += num + ((j+1) * count);
            temp += j + 1;
            printf("\n%d\n", total);
            if (total > price)
            {
                arrC[c] = j+1;
                total -= temp;
                arrP[c] = total;

                c++;
                break;
            } else {
                if ((j + 1) == count) {
                    arrC[c] = j+1;
                    arrP[c] = total;
                    c++;
                }
            }
        }
    }

    for (int i = 0; i < c; i++)
    {
        printf("%d %d", arrC[i], arrP[i]);
    }
    return 0;
}
