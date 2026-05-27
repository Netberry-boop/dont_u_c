/* float.c */

#include<stdio.h>
int main()
{
 
 float pi, radius, area; // float command to create float datatype 
 printf("what is the radius of the circle in cm?\n");
 scanf("%f", &radius); // "%f" is format string for float datatype
 /*
  %s - string
  %d - integer
  %f - float 
 */ 
 pi = 3.14;
 area = pi * radius * radius;
 printf("the area of the circle is %f\n", area);
 return 0;

}
