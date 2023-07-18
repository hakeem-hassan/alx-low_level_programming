#include "main.h"
/**
<<<<<<< HEAD
 * print_alphabet_x10 - make alphabet x10 times
 * Return: void
 */

=======
* print_alphabet_x10 - make alphabet x10 times 
* Return: void
*/
>>>>>>> c4a512b606c132f263c6a8533e41f2ccbe6573d1
void print_alphabet_x10(void)
{
char ch;
int i;
i = 0;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}

