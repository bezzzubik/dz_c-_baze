#include <stdio.h>

#include <limits.h>

/*
Можем иметь 3 варианта событий:
1. Три наибольших положительных числа
2. Два наибольших (по модулю) отрицательных числа и наибольшее положительное число
3. Три наименьших (по модулю) отрицательных числа, если положительных нет
При этом оба множества отрицательных чисел могут иметь одинаковые числа.
То есть если получаем положительное - просто сравниваем с тремя наибольшими
Если отрицательное - сначала сравниваем с тремя наименьшими, а потом с двумя наибольшими и записываем в оба
*/
int main()
{
    short plus1 = 0, plus2 = 0, plus3 = 0;
    short minMax1 = 0, minMax2 = 0;
    short minMin1 = SHRT_MIN, minMin2 = SHRT_MIN, minMin3 = SHRT_MIN;
    unsigned int n = 0;
    short temp = 0;

    if (!scanf("%d", &n))
        return 1;

    for (; n > 0; --n) {
        if (!scanf("%hd", &temp))
            return 1;

        if (temp > 0) {
            if (temp > plus1) {
                plus3 = plus2;
                plus2 = plus1;
                plus1 = temp;
            } else if (temp > plus2) {
                plus3 = plus2;
                plus2 = temp;
            } else if (temp > plus3) {
                plus3 = temp;
            }
        } else {
            if (temp < minMax1) {
                minMax2 = minMax1;
                minMax1 = temp;
            } else if (temp < minMax2) {
                minMax2 = temp;
            }
            if (temp > minMin1) {
                minMin3 = minMin2;
                minMin2 = minMin1;
                minMin1 = temp;
            } else if (temp > minMin2) {
                minMin3 = minMin2;
                minMin2 = temp;
            } else if (temp > minMin3) {
                minMin3 = temp;
            }
        }
    }

    long long result = 0;

    if (plus1 > 0) {
        if ((long long)plus1 * plus2 * plus3 > (long long)minMax1 * minMax2 * plus1) {
            result = (long long)plus1 * plus2 * plus3;
        } else {
            result = (long long)minMax1 * minMax2 * plus1;
        }
    } else {
        result = (long long)minMin1 * minMin2 * minMin3;
    }

    printf("%lld\n", result);

    return 0;
}