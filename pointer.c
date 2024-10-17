#include <stdio.h>

int main()
{
    int myvalue, *ptr = &myvalue;

    myvalue = 5;

    printf("Integer %i is saved at address %p\n", myvalue, ptr);

    int size = 8;

    int set[] = {5, 10, 15, 20, 25, 30, 35, 40};

    int *pptr = set;

    while (pptr < &set[size])
    {
        printf("%i", *pptr);
        pptr++;
    }
    printf("\n");

    while (pptr > set)
    {
        pptr--;
        printf("%i", *pptr);
    }
    printf("\n");
}