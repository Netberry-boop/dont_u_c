/* triangle.c */

#include<stdio.h>

int area_triangle(int base,int height)
{
 return 1.0/2 * base * height; // this is the value that is returned when called
/* here 1.0 is a clever way to trigger implicit conversion */
}

int main()
{

 int base, height, area;
 printf("Base: ");
 fflush(stdout); 
 /*here instead of using new line to flush the printf buffer, we are using 
 fflush() function with stdout file discriptor(the screen) to immediately flush 
 the buffer, this ensures immediate output - this function does not shift the 
 cursor to the next line like "\n"*/
 scanf("%d",&base); 
 printf("Height: ");
 fflush(stdout);
 scanf("%d",&height);
 area = area_triangle(base,height);
 printf("the area of the triangle is %d\n",area);
 
 return 0;

}

