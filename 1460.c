#include <stdio.h>

int main()
{
    int n, i, j, x = 1;

    scanf("%d", &n);

    int data[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            data[i][j] = x;
            x++;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", data[i][j]);
        }

        printf("\n");
    }

    return 0;
}
