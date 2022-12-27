#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, a, b, c, t;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int sum = 1, sum2 = 0, j = 0;
        scanf("%d %d %d", &a, &b, &c);
        while (c--)
        {
            sum2 += 1;
            if (sum2 > a)
            {
                sum2 = 1;
            }
            if (j >= a)
            {
                sum += 1;
                j = 0;
            }
            j++;
        }
        printf("%d%02d\n", sum2, sum);
    }

    return 0;
}
