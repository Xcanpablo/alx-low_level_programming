#include "_putchar.h"
/**
 * main - Entry point
 * Description: prints 'Holberton \n'
 * Return: Always 0 (success)
 */
int main(void)
{
char str[] = "_putchar\n";
int i = 0;

while (str[i] != '\0')
	{
	char c = str[i];

	_putchar(c);
	i++;
	}
return (0);
}
