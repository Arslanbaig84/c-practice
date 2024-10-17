#include <stdio.h>

int main (void)
{
    int m = 4;
    int n = 3;

    for (int i = 0; i < m; i++)
    {
        for (int plus = 1; plus <= 2*i+1; plus++)
        printf("+");
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int plus = 5-2*i; plus >= 1; plus--)
        printf("+");
        printf("\n");
    }
}c