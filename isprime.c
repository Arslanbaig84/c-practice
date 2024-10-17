#include <stdio.h>
#include <cs50.h>

bool prime(int n)
{
    int k = n/2;
    for (int i = 0; i <= k; i++)
    {
        if (n % i != 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    printf("Give an integer: ");
    scanf("%i", &n);

    if (prime(n) == true)
    {
        printf("%i is a prime number\n", n);
    }
    else
    {
        printf("%i is not a prime number\n", n);
    }
}