// eprintf

#include <stdio.h>
#include <cs50.h>

int main (void)
{
	eprintf("enter a number: ");

	int num = get_int();
	num = num/2;

    eprintf("answer is: %i\n", num);

	return 0;
}
