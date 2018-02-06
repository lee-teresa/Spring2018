// Command-line arguments

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int twice(int num);

int main(int argc, string argv[])
{
	// Verify input
	if (argc != 2)
	{
	    printf("give me a number to work with!\n");
	    return 1;
	}

    // Get num from command line
	int num = atoi(argv[1]);
	int answer = twice(num);

    printf("%i is twice as many as your number\n", answer);

	return 0;
}

int twice(int num)
{
    int result = num*2;
    return result;
}