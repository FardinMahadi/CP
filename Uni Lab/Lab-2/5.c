// 2 + 5 + 8 +... + nth
#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += 3 * i - 1;
    }

    printf("Total Sum: %d", sum);

    return 0;
}