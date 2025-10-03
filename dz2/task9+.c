#include <stdio.h>

unsigned long long fact_tree(unsigned int l, unsigned int r)
{
    if (l > r)
        return 1;

    if (l == r)
        return l;

    if (r - l == 1)
        return (l * r);

    unsigned int m = (l + r) / 2;

    return fact_tree(l, m) * fact_tree(m + 1, r);
}

unsigned long long factorial(unsigned char n)
{
    if (n < 2)
        return 1;

    return fact_tree(2, n);
}

/* На вход число. Посчитать факториал, n [0; 20] */
int main()
{
    unsigned char n = 0;
    if (!scanf("%hhd", &n))
        return 1;

    printf("%lld\n", factorial(n));
    return 0;
}