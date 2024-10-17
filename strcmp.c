#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* uppercase(char*);
//Bool samestring(char* s1, char* s2);

int main()
{
    char* s = NULL;
    char* t = NULL;
    printf("String No 1: ");
    scanf("%s", s);

    printf("String No 2: ");
    scanf("%s", t);

    s = uppercase(s);
    t = uppercase(t);
    printf("%s %s", s, t);
}

char* uppercase(char* s)
{
    
    char *t = NULL;
    for (int i = 0; i < strlen(s); i++)
    {
        t[i] = toupper(s[i]);
    }
    return t;
}

//Bool samestring(char* s1, char* s2)
//{

//}