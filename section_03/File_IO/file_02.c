#include <stdio.h>

int main(void)
{
    // open file "input.txt" in read only mode
    FILE *in = fopen("input01.txt", "r");

    // always make sure fopen() doesn't return NULL!
    if (in == NULL)
        return 1;

    // open file "output.txt" in write only mode
    FILE *out = fopen("output01.txt", "w");

    // make sure you could open file
    if (out == NULL)
        return 2;

    // get character
    int c = fgetc(in);
    printf("%c\n", c);

    while (c != EOF)
    {
        printf("%c\n", c);
        // write chracter to output file
        fputc(c, out);
        c = fgetc(in);
    }

    // close files to avoid memory leaks!
    fclose(in);
    fclose(out);
}
