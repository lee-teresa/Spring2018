#include <stdio.h>
#include <cs50.h>

int twice(int num);

int main(void)
{
	printf("enter a number: ");

	int num = get_int();
	int answer = twice(num);

    printf("%i is twice as many as your number\n", answer);

	return 0;
}

int twice(int num)
{
    int result = num/2;
    return result;
}