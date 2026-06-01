/* name.c */
#include <stdio.h>

int main()
{

    printf("What is your name ?\n");
    /*in-order to save the name from the user we need to use a variable
     variable is a box in memory with a nametag - to store the information
    that we later want*/

    char name[32]; // this has 3 parts
    // datatype : char - for storing characters
    // variable name : name
    // size declaration : [32] - in general sense it represents number of characters in the variable

    scanf("%s", &name); // read from user and store it in the variable "name"
    // here "%s" is a format string it describes the kind of variable that follows(corresponds to)
    // "%s" - tells that we want to read a string of characters
    // the use of "&" with variable name is too advanced before understanding pointers

    // use the information stored in the variable now
    printf("Hello %s\n", name);
    // here too we use format string, but not the "&" with name of variable
    return 0;
}
