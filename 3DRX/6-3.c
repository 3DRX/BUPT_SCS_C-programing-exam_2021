#include <stdio.h>

void sortAndOutput(int *data, int size)
{
    int i, k, m, num[1000], j = 0;
    int *order[1000];
    for (i = 0; i < size; j++)
    {
        order[j] = &data[i];
        i++;
        num[j] = data[i];
        i += num[j];
        i++;
    }
    for (i = 0; i < 10000; i++)
    {
        for (k = 0; k < j; k++)
        {
            if (*order[k] == i + 1)
            {
                for (m = 0; m < num[k] + 1; m++)
                {
                    printf("%d ", *(order[k] + m));
                }
                printf("%d\n", *(order[k] + num[k] + 1));
            }
        }
    }
}