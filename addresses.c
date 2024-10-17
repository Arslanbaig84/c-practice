#include <stdio.h>

int main(void)
{
    char c[4] = {'H', 'i', '!'};
    printf("%c%c%c%c\n", c[0], c[1], c[2], c[3]);

    char *s = "Hi!";
    printf("%s\n", s);
    printf("%p\n", s);
    
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);

    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+3));

    printf("%s\n", s);
    printf("%s\n", s+1);
    printf("%s\n", s+2);
    printf("%s\n", s+3);
}