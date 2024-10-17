#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Correct Usage: ./string_search string\n");
    }

    FILE *infile = fopen("input.txt", "r");
    if (infile == NULL)
    {
        printf("file not found.\n");
        return -1;
    }

    char s[100];
    int counter = 0;

    while (fscanf(infile, "%s",s) == 1)
    {
        if (strstr(s, argv[1]) != 0)
        counter++;
    }

    printf("we found %s word in file in %i times.\n", argv[1], counter);
    fclose(infile);
    return 0;
}
