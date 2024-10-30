#include <stdio.h>
#include <stdlib.h>

int find_index(int *a, int size, int key){

    for(int i = 0; i < size; i++){
        
        if(a[i] == key){

            return i;

        }
    }

    return -1;

}

//dereferenced find_pointer function
int *find_pointer(int *a, int size, int key){

    int *p = a; //the pointer should point to the first index of a

    for(*p; p < size + a; p++){ //itterating through the array using a pointer

        if(*p == key){

            return p; //returning the number the pointer is pointing at

        }
    }


    return NULL; //returning null if the key is not found

}

int count(int *a, int size, int key){

    int counter = 0;
    int *p = a;

    //p-a calculates how far the pointer has moved along the array
    while ((p = find_pointer(p, size - (p - a), key)) != NULL) {
        counter++;
        p++; //making the pointer move along the array using pointer arithmatic
    }

    return counter; 

}

int count2d(int rows, int cols, int a[rows][cols], int key){
    
    int counter = 0;
    for (int i = 0; i < rows; i++) {

        //call count for each row and add it to a counter to track the value
        counter += count(a[i], cols, key);  
    }

    return counter;

}