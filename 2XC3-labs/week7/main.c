#include <stdio.h>
#include <stdlib.h>
#include "array_utilities.h"

int main(){

    int a[] = {1,2,3,4,5,6,7,8,9,10}; //array to loop through
    int b[] = {1,1,1,2,2,2,3,3,3,4,5,6,7,8,8,8,8,9};
    int n = sizeof(a)/sizeof(a[0]); //size of array
    int m = sizeof(b)/sizeof(b[0]); //size of array
    
    //test cases for the index finder function (boundary cases)
    int result = find_index(a, n, 1);
    printf("Index of key: %d\n", result);

    result = find_index(a, n, 9);
    printf("Index of key: %d\n", result);

    result = find_index(a, n, 10);
    printf("Index of key: %d\n", result);

    result = find_index(a, n, 11);
    printf("Index of key: %d\n", result);


    //test cases for the pointer finder function (boundary cases)
    int *pointer_result = find_pointer(a, n, 1);
    //these if else statements checks if the returned value was null before dereferencing
    if (pointer_result != NULL) {
        printf("KEY %d FOUND %d\n", 1, *pointer_result);
    } 
    else {
        printf("KEY %d NOT FOUND\n", 1);
    }

    pointer_result = find_pointer(a, n, 9);
    if (pointer_result != NULL) {
        printf("KEY %d FOUND %d\n", 9, *pointer_result);
    } 
    else {
        printf("KEY %d NOT FOUND\n", 9);
    }

    pointer_result = find_pointer(a, n, 10);
    if (pointer_result != NULL) {
        printf("KEY %d FOUND %d\n", 10, *pointer_result);
    } 
    else {
        printf("KEY %d NOT FOUND\n", 10);
    }

    pointer_result = find_pointer(a, n, 11);
    if (pointer_result != NULL) {
        printf("KEY %d FOUND %d\n", 11, *pointer_result);
    } 
    else {
        printf("KEY %d NOT FOUND\n", 11);
    }



    result = count(b, m, 8);
    printf("The key was found this many times: %d\n", result);

    result = count(b, m, 9);
    printf("The key was found this many times: %d\n", result);

    result = count(b, m, 10);
    printf("The key was found this many times: %d\n", result);


    int v[3][10] = {{1,2,3,4,5,6,7,8,9,10}, {1,1,2,3,4,4,5,6,8,8}, {1,2,3,4,5,6,7,9,9,10}};
    int r = 10;
    int c = 3;

    result = count2d(r, c, v, 8);
    printf("The key was found this many times: %d\n", result);

    result = count2d(r, c, v, 10);
    printf("The key was found this many times: %d\n", result);

    result = count2d(r, c, v, 15);
    printf("The key was found this many times: %d\n", result);






}