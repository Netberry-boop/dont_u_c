/* while.c */
#include <stdio.h>

int main()
{

    int x;
    while (x != 1)
    {
        // this part is executed iteratively until user enters and changes the "x" value to 1
        printf("do you want to quit? enter 1 to quit from the program\n");
        scanf("%d", &x);
    }
    return 0;
}

// to debug code -> ctrl+_ (to go to the line of error indicated by the compiler)
