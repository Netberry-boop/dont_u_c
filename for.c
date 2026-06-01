/* for.c */

#include <stdio.h>
#include <assert.h> // contains the assert function
int main()
{
    // syntax - for(current/initialization; condition; operation)
    // flow : current -> condition check -> operation at last

    int table;
    printf("pick a number between 1-12: ");
    scanf("%d", &table);

    assert((table < 13) && (table > 0)); /*a simple way to do fault handling,
      if condition is true the program continues if not the program is terminated*/

    printf("%d's table :\n", table);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", table, i, (table * i));
    }

    return 0;
}
