/* for.c */

#include<stdio.h>

int main()
{
 // syntax - for(current/initialization; condition; operation)
 //flow : current -> condition check -> operation at last 
 
 int num;
 printf("pick a number between 1-12: ");
 scanf("%d",&num);
 printf("%d's table :\n",num);
 for(int i = 1; i<=10; i++)
 { 
  printf("%d X %d = %d\n",num,i,(num*i));
 }

 return 0;
 
}
