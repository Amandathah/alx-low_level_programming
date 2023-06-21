#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;

	while (number < 100)
	{
		int tens1 = number / 10;
		int ones1 = number % 10;

		int number2 = number + 1;

		while (number2 < 100)
		{
			int tens2 = number2 / 10;
			int ones2 = number2 % 10;

			putchar('0' + tens1);
			putchar('0' + ones1);
			putchar(' ');
			putchar('0' + tens2);
			putchar('0' + ones2);

			if (number < 98 || number2 < 99)
			{
				putchar(',');
				putchar(' ');
			}
			number2++;
		}
		number++;
	}
	putchar('\n');

	return (0);
}

