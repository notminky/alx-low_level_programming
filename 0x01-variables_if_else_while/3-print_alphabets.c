#include <stdio.h>
int main(void)
/**
*main - prints alphabet in lower case then upper case
*
*return: always 0.
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
