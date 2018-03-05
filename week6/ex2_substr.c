/*
Implement strchr(), a standard function that returns
a substring of a C string that starts with a given character.
If the character is not in the string, it should return NULL.

Example output:

jharvard@run.cs50.net (~): ./a.out
String: happy cat
Character: a
Looking for substring...
Substring: appy cat

Hint: recall that a[i] is treated by the compiler exactly
like this *(a + i)

*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>

char *my_strchr(char *str, char c)
{
   // TODO
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