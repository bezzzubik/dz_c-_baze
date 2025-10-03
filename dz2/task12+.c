#include <stdio.h>

void print_scope(int a, int n)
{
    char i = 0;
    for (i = n - 1; i >= 0; --i) {
        if ((a & (1 << i)))
            putchar('{');
        else
            putchar('}');
    }
    putchar('\n');
    return;
}

void generate(int mask, int open, int close, int n)
{
    if (open == n && close == n) {
        print_scope(mask, n * 2);
        return;
    }
    mask <<= 1;
    if (close < open) {
        generate(mask, open, close + 1, n);
    }
    if (open < n) {
        mask |= 1;
        generate(mask, open + 1, close, n);
    }
}

/* На вход n. Надо вывести все сбалансированные комбинации фигурных скобок 2*n.
2
{}{}
{{}}
Вывести в обратном лексикографическом порядке.
3
{}{}{}
{}{{}}
{{}}{}
{{}{}}
{{{}}}
4
{}{}{}{}
{}{}{{}}
{}{{}}{}
{}{{}{}}
{}{{{}}}
{{}}{}{}
{{}{}}{}
{{{}}}{}
{{}{}{}}
{{}{{}}}
{{{}}{}}
{{{}{}}}
{{{{}}}}
*/
int main()
{
    unsigned char n = 0;

    if (!scanf("%hhd", &n))
        return 1;

    generate(0, 0, 0, n);
    putchar('\n');

    return 0;
}