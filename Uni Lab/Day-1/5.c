#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is the biggest number.", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the biggest number.", b);
    }
    else if (c > b && c > a)
    {
        printf("%d is the biggest number.", c);
    }

    return 0;
}