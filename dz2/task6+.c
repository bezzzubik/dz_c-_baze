#include <stdio.h>

int main()
{
    unsigned int maskAll = 0;
    unsigned int maskTemp = 0;
    unsigned int countStr = 0;
    char c = 0;

    while ((c = getchar()) != '\n')
        maskAll |= 1 << (c - 'a');

    while ((c = getchar()) != '\n') {
        if (c == ' ') {
            if (maskAll == maskTemp)
                ++countStr;
            maskTemp = 0;
        } else {
            maskTemp |= 1 << (c - 'a');
        }
    }

    if (maskAll == maskTemp)
        ++countStr;

    printf("%d\n", countStr);

    return 0;
}