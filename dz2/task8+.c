#include <stdio.h>

/* на вход длина последовательности n. идут числа от -2^31 до 2^31 - 1. У всех, кроме одного числа, есть пара. 
Нужно найти, у какого числа нет пары, и вывести его.
Массивы запрещены. Линейная сложность и константа по памяти.*/
int main()
{
    int mainDig = 0, nowDig = 0;
    unsigned short k = 0;
    if (!scanf("%hd", &k))
        return 1;

    for (; k > 0; --k) {
        if (!scanf("%d", &nowDig))
            return 1;
        mainDig ^= nowDig;
    }

    printf("%d\n", mainDig);
    return 0;
}