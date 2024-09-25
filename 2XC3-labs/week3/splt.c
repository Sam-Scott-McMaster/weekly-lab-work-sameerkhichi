#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char s[1000];
    while (true)
    {
        int result = scanf("%s", s);

        if (result == 0){
            fprintf(stderr, "Bad Value\n");
            return EXIT_FAILURE;
        }

        if (result == EOF){
            break;
        }
        printf("%s\n", s);
    }

    return EXIT_SUCCESS;
}
