#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool caseChecker(int result, long number){

    bool checker = false;

    if(result != 1){
        puts("Please enter one number, no more or less.");
        checker = false;
    }

    if(number <= 1){

        puts("Can not operate sequence on this value");
        checker = false;

    }

    checker = true;

    return checker;

}


long hailstone(long number){

    long condition = (number%2);

    if(number <= 1){
        puts("1");
        return 1;
    }
    
    
    if(condition != 0){
        
        printf("%ld ", number);
        return (hailstone((number*3)+1));

    }

    if(condition == 0){

        printf("%ld ", number);
        return (hailstone((number/2)));

    }    


}

int main(){

   long number;
   
   puts("Please enter a number to pass to the hailstone sequence.");
   int result = scanf("%ld", &number);

   bool check = caseChecker(result, number);

    if(check){

        hailstone(number);

    }

    else{

        puts("Please try again.");
        return EXIT_FAILURE;

    }

    return EXIT_SUCCESS;

}