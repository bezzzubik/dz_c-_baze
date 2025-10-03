#include <stdio.h>

#define VOIDB '.'
#define BLOKS '*'

inline void print_simbols(char c, unsigned char n)
{
    unsigned char j = 0;
    for (j = 0; j < n; ++j)
        putchar(c);

    return;
}

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
        print_simbols(VOIDB, n - i - 1);
        print_simbols(BLOKS, i * 2 + 1);
        print_simbols(VOIDB, n - i - 1);
        putchar('\n');
    }

    return 0;
}