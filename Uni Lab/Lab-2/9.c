#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += pow(2 * i - 1, 2);
    }

    printf("Total Sum: %d", sum);

    return 0;
}