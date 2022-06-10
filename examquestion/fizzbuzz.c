#include <unistd.h>
void putchar(char c)
{
	write(1, &c, 1);
}

void putnbr(int n)
{
	if (n >= 10)
	{
		putnbr(n / 10);
		putchar((n % 10) + '0');
	}
	else if (n < 10)
	{
		putchar((n % 10) + '0');
	}
}

int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			write(1, "fizzbuzz", 9);
		else if((n % 3) == 0)
			write(1, "fizz", 5);
		else if ((n % 5) == 0)
			write(1, "buzz", 5);
		else
			putnbr(n);
		write(1, "\n", 1);
		++n;
	}
	return (0);
}