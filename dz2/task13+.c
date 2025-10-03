#include <stdio.h>

#include <limits.h>

int main()
{
    unsigned int n = 0;

    if (!scanf("%d", &n))
        return 1;

    // Маскируем число
    n = (~n) & UINT_MAX;

    // Имеем 32 разряда, можно пойти слева и справа 16 раз и смотреть, одинаковые биты или нет
    unsigned char i = 0;
    for (i = 0; i < 16; ++i) {
        if ((n >> (31 - i) & 1) != (n >> i & 1)) {
            printf("false\n");
            return 0;
        }
    }

    printf("true\n");

    return 0;
}