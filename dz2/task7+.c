#include <stdio.h>

int main()
{
    unsigned short k = 0;
    unsigned short maxD = 0;
    char c = 0;

    while ((c = getchar())) {
        if (c >= '0' && c <= '9') {
            k = k * 10 + c - '0';
        } else if ((c == ' ' || c == '\n') && k) {
            if (k > maxD) {
                maxD = k;
                k = 0;
            } else {
                printf("0\n");
                return 0;
            }
        } else {
            while ((c = getchar()) != ' ' && c != '\n')
                ;
        }
        if (c == '\n')
            break;
    }
    printf("1\n");

    return 0;
}