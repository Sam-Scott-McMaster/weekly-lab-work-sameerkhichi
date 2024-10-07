#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    bool checker = true;
    int earliestYear = 2025;
    int earliestMonth = 12;
    int earliestDay = 31;
    int a;
    int b;
    int c;

    do {
        puts("Enter a date (mm/dd/yyyy): ");
        int result = scanf("%d /%d /%d", &a, &b, &c);

        if (c < earliestYear && c != 0) {
            earliestYear = c;
            earliestMonth = a;
            earliestDay = b;
        }

        if (c == earliestYear && c != 0) {
            if (a < earliestMonth && a != 0) {
                earliestYear = c;
                earliestMonth = a;
                earliestDay = b;
            }
            if (a == earliestMonth && a != 0) {
                if (b < earliestDay && b != 0) {
                    earliestYear = c;
                    earliestMonth = a;
                    earliestDay = b;
                }
            }
        }

        if (result == EOF) {
            checker = false;
            return EXIT_SUCCESS;
        }

        if (a == 0 && b == 0 && c == 0) {
            printf("The earliest valid date is: ");

            switch (earliestMonth) {
                case 1: printf("%d January, %d\n", earliestDay, earliestYear); 
                break;
                case 2: printf("%d February, %d\n", earliestDay, earliestYear); 
                break;
                case 3: printf("%d March, %d\n", earliestDay, earliestYear); 
                break;
                case 4: printf("%d April, %d\n", earliestDay, earliestYear); 
                break;
                case 5: printf("%d May, %d\n", earliestDay, earliestYear); 
                break;
                case 6: printf("%d June, %d\n", earliestDay, earliestYear); 
                break;
                case 7: printf("%d July, %d\n", earliestDay, earliestYear); 
                break;
                case 8: printf("%d August, %d\n", earliestDay, earliestYear); 
                break;
                case 9: printf("%d September, %d\n", earliestDay, earliestYear); 
                break;
                case 10: printf("%d October, %d\n", earliestDay, earliestYear); 
                break;
                case 11: printf("%d November, %d\n", earliestDay, earliestYear); 
                break;
                case 12: printf("%d December, %d\n", earliestDay, earliestYear); 
                break;
                default: printf("Invalid month\n"); 
                break;

            }

            checker = false;
        }

        // Check for invalid input
        if (result != 3) {
            puts("Invalid input");
            checker = false;
            return EXIT_FAILURE;
        }

    } while (checker);

    return EXIT_SUCCESS;
}
