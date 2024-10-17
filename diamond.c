#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n = 4;
    int o = 3;

    for (int i = 0; i < n; i++)
    {
        for (int space = n-i; space > 1; space--)
        printf(" ");

        for (int plus = 1; plus <= i+1; plus++)
        printf("+");

        for (int plus = 0; plus < i; plus++)
        printf("+");

        printf("\n");
    }
    for (int i = 0; i < o; i++)
    {
        for (int space = 1; space <= i+1; space++)
        printf(" ");

        for (int plus = o; plus > i; plus--)
        printf("+");

        for (int plus = o-1; plus > i; plus--)
        printf("+");

        printf("\n");
    }
}