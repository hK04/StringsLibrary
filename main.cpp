#include <stdio.h>
#include <stdlib.h>

#include "strings.hpp"

//Test of functions
int main(void){
    const char Slaves[] = "A moy boychick";
    char based[80];
    char cringe[40] = { 0 };
    char porridge[20];
    char gigachad[20];
    char GachiString[10];
    FILE* AssFile;
    AssFile = fopen("MyTexT.txt", "r");

    //Test Section
    puts(Slaves);//->
    printf("%d", strlen(Slaves));//->
    putchar('\n');
    strcpy(cringe, Slaves);//->
    puts(cringe);
    strncpy(cringe, Slaves, 5);//->
    puts(cringe);

    strcpy(based, "these "); //example taken from original documentation 
    strcat(based, "strings "); //example taken from original documentation 
    strcat(based, "are "); //example taken from original documentation 
    strcat(based, "concatenated."); //example taken from original documentation 
    puts(based); //->
    strcpy(porridge,"To be "); //example taken from original documentation 
    strcpy(gigachad,"or not to be"); //example taken from original documentation 
    strncat(porridge, gigachad, 6); //example taken from original documentation 
    puts(porridge); //->

    
    fgets(GachiString, 10, AssFile); //example taken from original documentation 
    fclose(AssFile); //example taken from original documentation 
    puts(GachiString); //-> 
    

    char* CringedString = strdup("Really Crindged String");
    puts(CringedString); //->
    free(CringedString); //necessity of making pointer free after usage taken from documentation
    //(!) to many leaks..... nearly wiki leaks website itself ))))
    return 0;  
}