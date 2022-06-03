#include <unistd.h>

char *rotone(char *str);

char *rotone(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if((str[n] >= 'A' && str[n] < 'Z') || (str[n] >= 'a' && str[n] < 'z'))
			str[n] += 1;
		else if(str[n] == 'Z' || str[n] == 'z')
			str[n] -= 25;
		write(1, &str[n], 1);
		++n;
	}
	return (str);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}