#include <cs50.h>
#include <stdio.h>


// fix the program without using any new functions

int add(string number)
{
    int first = number[0] - '0';
    int second = number[1] - '0';
    int third = number [2] - '0';
    int result = first+second+third;
    return result;
}

int main(void)
{
    string num = "138";

    int result = add(num);
    printf("%i\n", result);

}
