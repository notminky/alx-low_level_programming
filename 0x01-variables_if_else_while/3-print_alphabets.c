#include <stdio.h>
int main(void)

/**
* main - Prints the alphabet in lowercase, and then in uppercase.
*
* Return: always 0.
*/
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return(0);
}
