#include <stdio.h>

#define VOIDS "...................."
#define BLOKS "****************************************"

/* На вход n, надо вывести пирамиду высотой n вида
..*..
.***.
*****
*/
int main()
{
    unsigned char n = 0, i = 0;

    if (!scanf("%hhd", &n))
        return 1;

    for (i = 0; i < n; ++i) {
        printf("%.*s%.*s%.*s\n", n - i - 1, VOIDS, i * 2 + 1, BLOKS, n - i - 1, VOIDS);
    }

    return 0;
}