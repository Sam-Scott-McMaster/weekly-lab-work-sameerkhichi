#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string_utilities.h"

#define INPUT_SIZE 100

int main(){

    char input[INPUT_SIZE + 1];
    
    while(fgets(input, INPUT_SIZE, stdin)){
        trim(input);
        to_upper(input);
        printf("%s", input);
    }


    char *lower = to_lower_pure(input);

    printf("%s", lower);
    free(lower);

    return 0;

}