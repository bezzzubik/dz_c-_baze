#include <stdio.h>

unsigned long long num_razr(unsigned long long n)
{
    unsigned long long i = 0, ll = 1;
    for (i = 0; ll <= n; ++i)
        ll *= 2;

    return i;
}

int main()
{
    unsigned long long n = 0, mask = 0;

    if (!scanf("%lld", &n))
        return 1;

    if (n == 0) {
        printf("1\n");
        return 0;
    }

    // Делаем маску
    mask = (1 << num_razr(n)) - 1;

    // Маскируем итог
    n = (~n) & mask;

    printf("%lld\n", n);

    return 0;
}