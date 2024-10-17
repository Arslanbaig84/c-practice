#include <stdio.h>
#include <cs50.h>

int main (void)
{
    float c, f;
    for
    (c=1; c<=30; c++)
    {
        f = 1.8*c + 32;
        printf("%.2f: %.2f\n", c, f);
    }
}