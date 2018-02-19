#include <stdio.h>

int main(void)
{
    // open file input.txt
    FILE* in = fopen("input.txt", "r");

    // checking for the file
    if(in == NULL)
        return 1;

    else
    {
        // creating text file output.txt
        FILE* out = fopen("output.txt", "w");

        // checking for NULL
        if(out == NULL)
            return 2;

        // get the first character
        int c = fgetc(in);

        while(c != EOF)
        {
            //
            fputc(c, out);
            c = fgetc(in);
        }

        //
        fclose(in);
        fclose(out);
    }
}