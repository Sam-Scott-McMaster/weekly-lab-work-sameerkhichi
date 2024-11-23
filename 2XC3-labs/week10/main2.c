#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string_utilities.h"

int main() {
    char *test_strings[] = {"   hello world   ", " \t\nbasically whitespace\n\t ", "Nowhitespaceatstart", "", "   \t\n   "};

    for (int i = 0; i < 5; i++){
        
        char *first, *last;

        find_content(test_strings[i], &first, &last);

        if (first == last && *first == '\0'){
            printf("String %d: All whitespace or empty\n", i + 1);
        } 

        else{
            printf("String %d: First='%c', Last='%c'\n", i + 1, *first, *last);
        }
    }

    for(int i = 0; i < 5; i++){
        printf("Before operation: \"%s\"\n", test_strings[i]);
        trim(test_strings[i]);
        printf("After operation: \"%s\"\n\n", test_strings[i]);
    }

    return 0;

}
