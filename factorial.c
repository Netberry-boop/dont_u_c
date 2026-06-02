#include <stdio.h>

int fact(int num)
{
    while (num > 0)
    {
        return num * fact(num - 1);
    }
    return 1;
}

int mod(int num) // this function returns last digit - remainder
{
    return num % 10;
}

int sum_of_fact(int num) // returns sum of factorial of digits
{
    int sum = 0;
    while (num > 0)
    {
        sum += fact(mod(num));
        num = num / 10;
    }
    return sum;
}

int main()
{
    for (int i = 0; i <= 100000; i++) // range from 1 - 100000
    {
        if (i == sum_of_fact(i)) // checking if number and sum of factorial of digits are equal
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
