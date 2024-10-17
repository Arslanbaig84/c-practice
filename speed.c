#include <stdio.h>
#include <cs50.h>

int main (void)
{
    const int speed = 40;
    int time = get_int("How many hours travelled: ");
    for
    (int i = 1; i <= time; i++)
    {
        int distance = speed * i;
        printf("%i = %i\n", i, distance);
    }
}