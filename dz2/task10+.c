#include <stdio.h>

unsigned long C(unsigned char n, unsigned char k)
{
    if (k == n || k == 0)
        return 1;
    if (k != 1) {
        return C(n - 1, k) + C(n - 1, k - 1);
    } else {
        return n;
    }
}

/* На вход "n k". Надо вывести число сочетаний n по k; n и k - [0; 20], n >= k */
int main()
{
    unsigned char n = 0, k = 0;
    if (!scanf("%hhd %hhd", &n, &k))
        return 1;

    printf("%ld\n", C(n, k));
    return 0;
}