/* pointer.c */

// pointer is a variable in c, no data is stored and used to point to another variable or data

#include<stdio.h>
#include<string.h> // this header contains the "strncpy()" function
int main()
{


 char str[32];
 strncpy(str, "I like apples", 31); // string is combination of "char"
 char *p; //the star indicates that the variable is a pointer, (here the "char" pointer points to other variable type - "char") 
 
 p = str ; // now "p" is pointing towards the variable "str"
 
 p = p+1; // pointer is shifted to the next character of the string .

 printf("%s\n",p); // print variable "str" by using the pointer variable "p" // prints entire string from pointing start to the end of the string

 printf("%c\n", *p); // we are using  "*" here, to tell to not to access pointer but where it is exactly pointing to 


	 return 0;



}

