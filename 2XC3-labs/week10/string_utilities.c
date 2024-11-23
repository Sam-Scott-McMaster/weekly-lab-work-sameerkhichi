#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string_utilities.h"

void to_upper(char *str){

    for(int i =0; str[i] != '\0'; i++){
        
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - ('a' - 'A');
        }
    }
}

char* to_lower_pure(const char *str){

    char *result = malloc(strlen(str) + 1);
    
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            result[i] = str[i] + ('a' - 'A');
        }
        else{
            result[i] = str[i];
        }
    }

    result[strlen(str)] = '\0';

    return result;


}

void find_content(const char *str, char **first, char **last){
    
    *first = *last = NULL;

    if(str == NULL || *str == '\0'){
        *first = *last = (char *)str;
        return;
    }

    const char *start = str;
    while(*start != '\0' && (*start == ' ' || *start == '\t' || *start == '\n')){
        start++;
    }

    if(*start == '\0'){
        *first = *last = (char *)start;
        return;
    }

    const char *end = str + strlen(str) - 1;

    while(end > start && (*start != '\0' && (*start == ' ' || *start == '\t' || *start == '\n'))){
        end--;
    }

    *first = (char *)start;
    *last = (char *)end;
}

void trim(char *str){

    char *first, *last;

    find_content(str, &first, &last);

    if(first == last && *first == '\0'){
        str[0] = '\0';
    }
    
    else{
        size_t length = last - first + 1;
        memmove(str, first, length);
        str[length] = '\0';
    }

}