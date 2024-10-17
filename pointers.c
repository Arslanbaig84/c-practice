#include <stdio.h>

int main()
{
    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int *p;
    p = x;

    //printf("%i\n", x[0]);
    //printf("%p\n", &x[0]);

    //(*p)++;

    //printf("%i\n", x[0]);
    //printf("%p\n", &x[0]);

    for (int i = 0 ; i < 10; i++)
    {
        //p[i] is same as x[i]
        printf("%i\n", p[i]);
        //*(p+i) is same as x[i] or p[i]
        printf("%i\n", *(p+i));
        //(&x[i] is same as p)
        printf("%p\n", &x[i]);
    }

    for (int i = 0 ; i < 10; i++)
    {
        //pointer arithmetic
        printf("%i\n", *p);
        p++;
    }

    for (int i = 0 ; i < 10; i++)
    {
        //pointer arithmetic
        p--;
        printf("%i\n", *p);
    }


}