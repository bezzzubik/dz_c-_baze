#include <stdio.h>

#define START_SALE -1
#define START_BY 10e4 + 1

int main()
{
    int by = START_BY, sale = START_SALE;
    unsigned int n = 0;
    int temp = 0;

    int result = 0;

    if (!scanf("%d", &n))
        return 1;

    for (; n > 0; --n) {
        if (!scanf("%d", &temp))
            return 1;
        if (temp < by) {
            if (result < sale - by)
                result = sale - by;
            by = temp;
            sale = START_SALE;
        } else if (temp > sale && by != START_BY) {
            sale = temp;
        }
    }

    if (sale == START_SALE) {
        printf("%d\n", result);
    } else {
        if (result > sale - by)
            printf("%d\n", result);
        else
            printf("%d\n", sale - by);
    }
    return 0;
}