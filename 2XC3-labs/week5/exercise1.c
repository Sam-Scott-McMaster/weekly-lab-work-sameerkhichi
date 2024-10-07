#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int days;
    int firstDay;

    puts("Please enter the amount of days this month and what the starting day is in the form 'x x'");
    puts("Where 1=monday - 7=sunday");

    int result = scanf("%d %d", &days, &firstDay);

    if (result < 2) {
        fprintf(stderr, "Invalid input\n");
        return EXIT_FAILURE;
    }

    puts("M   T   W   T   F   S   S");

    char spaces[100] = "";
    
    for (int c = 1; c < firstDay; c++) {
        strcat(spaces, "    "); 
    }

    printf("%s", spaces);

    for (int i = 1; i <= days; i++) {
        if (i<9){
            printf("%d   ", i);
        }
        if (i>=9){
            printf("%d  ", i);
        }
         
        if ((firstDay - 1 + i) % 7 == 0) {
            printf("\n");
        }
    }

    printf("\n"); // Final newline for better formatting
    return EXIT_SUCCESS;
}
