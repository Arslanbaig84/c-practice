#include <stdio.h>

int main()
{
    FILE *outfile = fopen("input.txt", "w");

    if (outfile == NULL)
    {
        printf("could not open file\n");
        return 1;
    }

    for (int i = 0; i < 10; i++)
    {
        fprintf(outfile, "Not a line of text.\n");
    }

    fclose(outfile);
}