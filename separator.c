#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char c[1000];

    printf("Type in a sentence.\n");
    fgets(c, 1000, stdin);

    int n  = strlen(c);
    int counter = 0;

    for (int i = 0; i < n ; i++)
    {
        if (isupper(c[i]))
        {
            counter++;
        }
    }

    char *new = malloc(n + counter + 1);

    int i = 0;
    int j = 0;
    while (i < n)
    {
        if (isupper(c[i]) && (i != 0))
        {
            new[j] = ' ';
            j++;
            new[j] = tolower(c[i]);
            i++;
            j++;
        }
        else
        {
            new[j] = c[i];
            j++;
            i++;
        }
    }
    new[j] = '\0';

    printf("%s", new);
    free(new);
}