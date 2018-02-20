#include <stdio.h>
#include <cs50.h>

#define ASCII_COUNT 128
#define ALPHABET 26

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./scrabble tom.txt\n");
        return 1;
    }

    // open up the source file
    FILE* source = fopen(argv[1], "r");
    if (source == NULL)
    {
        printf("cp: %s: No such file\n", argv[1]);
        return 1;
    }

    // declare array to keep track of character count, and initialize to 0
    int char_count[ASCII_COUNT] = {0};

    // read the contents of the source file one char (int!) at a time, and increment the correct ASCII index in the
    // the array char_count. Remember to use int so that the c != EOF comparison is reliable
    for (int c = fgetc(source); c != EOF; c = fgetc(source))
    {
        char_count[c] += 1;
    }

    // declare final array for alphabet, and copy the counts from char_count only for capital and lowercase letters
    int alphabet[ALPHABET] = {0};
    for(int i = 65; i <= 90; i++)
    {
        alphabet[i - 65] += char_count[i];
    }

    for(int i = 97; i <= 122; i++)
    {
        alphabet[i - 97] += char_count[i];
    }

    // print the final count
    printf("final count is:\n");
    for(int i = 0; i < ALPHABET; i++)
    {
        printf("%c: %i\n", i + 97, alphabet[i]);
    }

    fclose(source);
}
