#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    double value1;
    double value2;
    double value3;

    int result = scanf("%lf %lf %lf", &value1 , &value2 , &value3);

    if (result < 3) {
        fprintf(stderr, "Bad Value\n");
        return EXIT_FAILURE;
    }
    
    if (value1 <= 0){
        fprintf(stderr, "invalid values\n");
        return EXIT_FAILURE;
    }

    double value = (value3/value1);
    printf("%.1lf\n",value);
        
    return EXIT_SUCCESS;
}