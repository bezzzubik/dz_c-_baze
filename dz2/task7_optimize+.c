#include <stdio.h>

int main()
{
    unsigned short k = 0;
    unsigned short maxD = 0;

    do {
        if (scanf("%hd", &k)) {
            if (k > maxD) {
                maxD = k;
            } else {
                printf("0\n");
                return 0;
            }
        } else {
            if (scanf("%*s"))
                return 1;
        }
    } while (getchar() != '\n');

    printf("1\n");

    return 0;
}