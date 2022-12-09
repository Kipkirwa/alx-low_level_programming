#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
		char letter;
		for(letter = 'a'; letter <= 'z'; letter++)
			{
				if(letter != 'e' && letter != 'q')
					putchar(letter);
			}
		putchar('\n');
		return (0);
}
