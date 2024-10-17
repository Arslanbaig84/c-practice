#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s1[1000], find[100], replace[100];
    int counter = 0;

    printf("Type in string.\n");
    fgets(s1, 1000, stdin);

    printf("Word that needs to be replaced.\n");
    scanf("%s", find);

    printf("Word with which to replace.\n");
    scanf("%s", replace);

    int string_length = strlen(s1);
    int find_length = strlen(find);
    int replace_length = strlen(replace);

    int difference = replace_length - find_length;

    for (int i = 0; i < string_length; i++)
    {
        if (strstr(&s1[i], find) == &s1[i])
        {
            counter++;
            i += find_length - 1;
        }
    }

    char *s2 = malloc(string_length + (difference * counter) + 1);

    int i = 0;
    int j = 0;

    while (i < string_length)
    {
        if (strstr(&s1[i], find) == &s1[i])
        {
            strncpy(&s2[j], replace, replace_length);
            i += find_length;
            j += replace_length;
        }
        else
        {
            s2[j] = s1[i];
            i++;
            j++;
        }
    }
    s2[j] = '\0';

    printf("Original: %s", s1);
    printf("New: %s", s2);
    free(s2);
}
