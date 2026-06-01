/* if.c */
#include <stdio.h>

int main()
{

    int speed;
    printf("enter your speed in kmph\n");
    scanf("%d", &speed);
    if (speed >= 100)
    {
        printf("you are are going very fast!! slow down to avoid any accidents!\n");
    }
    else if (speed >= 50 && speed < 100)
    {
        printf("your speed is perfect\n");
    }
    else
    {
        printf("you going slow!, speed up if you want to reach on time\n");
    }

    return 0;
}
