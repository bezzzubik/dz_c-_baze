#include <stdio.h>

#define ONES "11111111111111111111"
#define ZEROS "00000000000000000000"

/* На вход n, надо нарисовать лесенку высотой n вида
001
011
111
При этом используя не более n вызовов printf()
*/
int main()
{
    unsigned char n = 0, i = 0;
    if (!scanf("%hhd", &n))
        return 1;

    for (i = 1; i <= n; ++i)
        printf("%.*s%.*s\n", n - i, ZEROS, i, ONES);

    return 0;
}