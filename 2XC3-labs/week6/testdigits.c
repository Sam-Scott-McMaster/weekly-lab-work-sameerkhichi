#include <stdio.h>
#include <stdlib.h>
#include "digits.h"


int main() {
    int min, max, sum;
    long n;

    n = 1234;
    sum = digits(n, &max, &min);
    printf("%ld: sum %d, min %d, max %d\n", n, sum, min, max);
    if (max == 4 && min == 1 && sum == 10) {
        puts("success");
    } else {
        puts("failure");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}