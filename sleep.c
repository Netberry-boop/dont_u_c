/* sleep.c */

#include<stdio.h>
#include<unistd.h>

int main()

{
 /* "sleep()" function is used for delaying the next step
 of the program */
 

 printf("wait while processing");
 fflush(stdout);
 /* 

 "fflush()" usage is essential here as buffer will only output 
 if it sees the "/n"-newline character therefore if not used the sleep
 time is combined untill "/n" is seen cause inaccurate output

 */

 sleep(1);
 printf(".");
 fflush(stdout);
 sleep(1);
 printf(".");
 fflush(stdout);
 sleep(1);
 printf(".");
 fflush(stdout);
 sleep(1);
 printf("\nprocess completed\n");


 return 0 ; 



}
