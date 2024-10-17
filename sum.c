#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int i, n, sum = 0;
    do
    {
        n = get_int("positive integer: ");
    }
    while (n<0);

    for (i=0; i<=n; i++)
    {
        sum += i;
    }
    printf("%i\n", sum);
}