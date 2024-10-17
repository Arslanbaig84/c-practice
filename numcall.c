#include <stdio.h>

void showstatic();

int main()
{
    //calling function 5 times
    for (int i = 0; i < 5; i++)
    {
        showstatic();
    }
}

void showstatic()
{
    static int numcall = 0;

    printf("This function has been calle %i times.\n", numcall++);
}