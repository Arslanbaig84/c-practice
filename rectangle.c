#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int x;
    int y;
    do
    {
        x = get_int("length: ");
        y = get_int("width: ");
    }
    while (x < y);

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("X");
        }
        printf("\n");
    }
}