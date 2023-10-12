#include "main.h"

/**
 * main - Check Code
 *
 * Description: Prints the alphabet in lowercase followed by a new line.
 */
void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
        _putchar(letter);

    _putchar('\n');
}	
