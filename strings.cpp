#include <stdio.h>
#include <stdlib.h>

int puts(const char* str){
    const char* end_of_str = str;

    while (*end_of_str != '\0'){
        putchar(*end_of_str);
        end_of_str++;
    }
    putchar('\n');

    return 1;
}

unsigned int strlen(const char* str){
    const char* end_of_str = str;

    while (*end_of_str != '\0')
        end_of_str++;

    return end_of_str - str;
}

char* strcpy(char* destination, const char* source){
    char* original = destination;
    while (*source != '\0')
        *destination++ = *source++;
    *destination = '\0';

    return original;
}

char* strncpy(char* destination, const char* source, unsigned int num){
    char* original = destination;  
    for (unsigned int i = 0; i < num; i++)
        *destination++ = *source++;
    *destination = '\0';

    return original;
}

char* strcat(char* destination, const char* source){
    char* original = destination;  
    char* end_of_str = destination;

    while (*end_of_str != '\0')
        end_of_str++;

    destination = end_of_str;

    while (*source != '\0')
        *destination++ = *source++;
    *destination = '\0';

    return original;
}

char* strncat(char* destination, const char* source, int num){
    char* original = destination;  
    char* end_of_str = destination;

    while (*end_of_str != '\0')
        end_of_str++;

    destination = end_of_str;

    for (unsigned int i = 0; i < num; i++)
        *destination++ = *source++;
    *destination = '\0';

    return original;
}

char* fgets(char* str, int num, FILE* stream){
    char* original = str;  
    int i = 0;

    for(char c = fgetc(stream); c != '\0' && i < num - 1; c = fgetc(stream)){
        *str = c;
        str++;
        i++;
    }
    *str = '\0';

    return original;
}

char* strdup(const char* str1){
    unsigned int size = sizeof(*str1);
    char* pointer = (char*) malloc(size);
    char* str2 = pointer;

    while (*str1 != '\0')
        *str2++ = *str1++;
    *str2 = '\0';

    return pointer;
}