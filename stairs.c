#include <stdio.h>

void printspaces(int);
int main()
{
    for (char letter = 'A'; letter <= 'Z'; letter+=2)
    {
        printspaces(letter - 'A');
        printf("%c%c",letter, letter+1);
        printf("\n");
    }
}

void printspaces(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf(" ");
    }
}