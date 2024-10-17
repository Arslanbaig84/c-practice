#include <stdio.h>
#include <cs50.h>

int main (void)
{
    string again;
    do
    {
        int n = get_int("Type a positive integer: ");
        if
        (n % 2 == 0)
        printf("even\n");
        else
        printf("odd\n");

        again = get_string("Do you want to try again(y/n): ");

    }
    while
    (*again == 'y' || *again == 'Y');
}