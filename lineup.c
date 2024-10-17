#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main ()
{
    int n = get_int("Number betwee 1 & 20: ");

    for (int i = 0; i < n; i++)
    {
        string s = get_string("Name: ");
        printf("%s\n", s);
    }
}