/* numbers.c */
#include <stdio.h>

int main()
{
  
 int x,y,answer;  // command to create an interger is int
 printf("select a number\n");
 scanf("%d", &x); // here "%d" is format string to represent integer
 printf("Select another number\n");
 scanf("%d", &y);
 answer = x + y ;
 printf("the answer is %d\n", answer);
 return 0 ; 


}

