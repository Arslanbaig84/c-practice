#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int b;
    const int n = 16;

    for (int i=2; i<8; i++)
    {
    for (b=i*n; b<=(i+1)*n; b++)
    printf("%c ", b);
        printf("\n");
    }
}