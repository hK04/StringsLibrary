#include <stdio.h>

#include "strings.hpp"

//make a function that gets answers from file
char* test_1 = "Awesome string";
int answ_1 = 14;

void run_test(unsigned int (*run_function)(const char*)){ //something really wrong with strict 
    int function_answer = run_function(test_1);           //types of run_function args
    if (function_answer == answ_1)
        printf("Test succed"); 
    else
        printf("Test failed"); //should add more data in failed output
}   

int main(){
    run_test(strlen);
}