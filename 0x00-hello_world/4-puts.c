/*
 * File: 4-print_alphabet.c
 * Auth: Brennan
 */

#include <stdio.h>

/**
 * main -Prints the alphabet in lowercase, except for q and e.
 * returno: Always 0.
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != 'e' && letter != 'q')
		putchar(letter);
	} 
         putchar('\n');
         return (0);
}
