#include <stdio.h>

int main()
{
    FILE *infile = fopen("input.txt", "r");
    if(infile == NULL)
    {
        printf("could not open input file.\n");
        return 1;
    }

    FILE *outfile = fopen("output.txt", "w");
    if (outfile == NULL)
    {
        printf("could not open output file.\n");
        return 1;
    }

    char buffer;

    while (fread(&buffer, sizeof(char), 1, infile))
    {
        fwrite(&buffer, sizeof(char), 1, outfile);
    }

    fclose(infile);
    fclose(outfile);
}