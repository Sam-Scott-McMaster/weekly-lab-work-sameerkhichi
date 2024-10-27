/* Starter code for Lab 6.1 Activity
 *
 * This file will not compile as is. You need to create the digits function.
 *
 */
#include <stdio.h>
#include <stdlib.h>

/* Main function. Runs test cases for the digits function.
 * Exits with failure code on first test case fail.
 * Otherwise exits with success.
 */

int digits(long n, int *max, int *min) {
    int sum = 0;
    *max = 0;
    *min = 9;

    while (n > 0) {
        int digit = n % 10;  // strip the rightmost digit
        sum += digit;        // updating the sum by adding the digits

        // Update max and min pointers
        if (digit > *max) {
            *max = digit;
        }
        if (digit < *min) {
            *min = digit;
        }

        n = n / 10;  // Remove the rightmost digit
    }

    return sum;  // Return the sum of digits
}