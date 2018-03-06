#include <stdio.h>
#include <cs50.h>
#include <string.h>

char *my_strchr(char* str, char c)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (*(str + i) == c)
        {
            return (str + i);
        }
    }
    return NULL;

}

int main(void)
{
    // ask for string
    printf("String: ");
    char *str = get_string();

    // ask for a char
    printf("Character: ");
    char c = get_char();
    printf("Looking for substring...\n");

    // call my_strchr
    char *result = my_strchr(str, c);

    // if char doesn't exist, print "couldn't find"
    if (result == NULL)
    {
        printf("Couldn't find %c.\n", c);
    }

    // otherwise print substring
    else
    {
        printf("Substring: %s \n", result);
    }
}