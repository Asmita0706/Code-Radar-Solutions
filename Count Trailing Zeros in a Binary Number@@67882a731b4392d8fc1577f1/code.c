#include <stdio.h>

int countTrailingZeros(unsigned int num) {
    int count = 0;
    if (num == 0)
        return 32;

    while ((num & 1) == 0) {
        count++;
        num >>= 1;
    }

    return count;
}

int main() {
    unsigned int num;

    // Get input from user
    printf("");
    scanf("%u", &num);

    int trailingZeros = countTrailingZeros(num);
    printf("%d", trailingZeros);

    return 0;
}
