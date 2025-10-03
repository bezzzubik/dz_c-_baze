#include <stdio.h>

int main()
{
    unsigned int n = 0, i = 0, capacity = 0, capacityTemp = 0, plant = 0;
    unsigned long l = 0;

    if (!scanf("%d %d", &n, &capacity))
        return 1;

    capacityTemp = capacity;

    for (i = 0; i < n; ++i) {
        if (!scanf("%d", &plant))
            return 1;

        if (capacityTemp < plant) {
            l += 2 * i;
            capacityTemp = capacity;
        }
        ++l;
        capacityTemp -= plant;
    }

    printf("%ld\n", l);
    return 0;
}