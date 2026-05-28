/* random.c */

#include<stdio.h>
#include<stdlib.h> //standard library - contains the "rand()" function
#include<unistd.h> // unix standard library - contains the "getpid()" function 



int our_random_function(int max)
{

 int x;  

 x = rand() % max + 1 ; //[1,2,3,4,5,6,7,8,9,10]

/* 
 
 
 "rand()" is a pseudo-random function - but without intializing
 the seed the program will give the same random value each time it is executed
 reason the "rand()" function starts at the same random value every execution */ 
 

 /*
 
 pseudo random means that the result is deterministic and with same key it 
 outputs same result for same input.

 */

 return x;

}



int main()
{
 
 srand(getpid()); /* this is a clever way of always using different seed every 
 execution as "getpid()" returns different pid most of the time.   
 */ 


 /* 

 "srand()" initializes the start of random sequence for "rand()"
 "1" inside the function is called the seed, for different seed the start or 
 the initialization of "rand()" is different, therefore giving different 
 output for every seed 

 */ 
 
 

 int max;
 printf("enter the max-limit of random value : ");
 scanf("%d",&max); 
 int random;
 random = our_random_function(max);
 
 

 printf("%d\n",random);

 
 return 0;   


}

