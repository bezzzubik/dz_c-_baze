#include <stdio.h>

void rekur_print()
{
    char c = 0;

    if ((c = getchar()) != '\n') {
        rekur_print();
        putchar(c);
    }
    return;
}

/* На вход строка. Надо вывести в обратном порядке */
int main()
{
    rekur_print();

    return 0;
}