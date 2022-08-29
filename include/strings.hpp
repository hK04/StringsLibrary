#define print_int_output_of_test(x) \
    {printf("Test Function: %s, Result: %d\n", #x, x);}

#define print_char_pointer_output_of_test(x) \
    {printf("Test Function: %s, Result: %c\n", #x, *x);}

#define print_string_output_of_test(x) \
    {printf("Test Function: %s, Result: %s\n", #x, x);}

#define __assert__(condition)         \
    {if (!(condition))                \
        printf("Error in %s in %d\n", \
            #condition, __LINE__);}

int puts(const char* str);

unsigned int strlen(const char* str);

char* strcpy(char* destination, const char* source);

char* strncpy(char* destination, const char* source, unsigned int num);

char* strcat (char* destination, const char* source);

char* strncat (char* destination, const char* source, int num);

char* fgets(char* str, int num, FILE* stream);

const char* strchr(const char* str, int character);

int strcmp(const char* str1, const char* str2);

char* strdup(const char *str1);