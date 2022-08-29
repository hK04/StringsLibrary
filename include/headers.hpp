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