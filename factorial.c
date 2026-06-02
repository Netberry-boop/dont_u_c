#include <stdio.h>

int fact(int num)
{
    while (num > 0)
    {
        return num * fact(num - 1);
    }
    return 1;
}

int mod(int num)
{
    return num % 10;
}

int sum_of_fact(int num)
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
    for (int i = 0; i <= 100000; i++)
    {
        if (i == sum_of_fact(i)){
        printf("%d\n",i);
        }
    }
    return 0;
}
