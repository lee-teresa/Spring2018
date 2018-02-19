#include <string.h>
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string();
    printf("hello, %s\n", name);
}