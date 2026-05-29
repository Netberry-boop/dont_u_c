/* struct.c */ 

#include<stdio.h>
#include<string.h> // this header file contains the "strcpy()" function

// it is composite of multiple variables 
// structure is made outside of main and then used inside main, it can also be used by other functions.

struct person{
	char title[8]; 
	/* using multiple of 8 number of characters for memory efficiency 
	- as in 64bit architecture memory blocks are of size 8 bytes and 
	in 32bit architecture size of 4 bytes*/
	char lastname[32];
	int age;
}; // here you add semi-colon ";" along side curly bracket "}"

int main()
{

 struct person yusuf; //here the "struct person" represents the datatype, and yusuf is the variable name 
 // "strncpy(variable.element,"value",max_num_of_char)" function is used here to copy strings into the variable
 strncpy(yusuf.title, "yusuf", 7); // it is good practice to use (allocated-1) char in-order to prevent any error
 strncpy(yusuf.lastname, "ansari",31);
 yusuf.age = 21 ;
 
 printf("%s %s is %d years old\n",yusuf.title,yusuf.lastname,yusuf.age);

 return 0;

}

 
		
