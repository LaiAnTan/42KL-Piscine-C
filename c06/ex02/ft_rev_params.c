#include <unistd.h>

int main(int argc,char *argv[])
{
	int n;
	int m;

	n = (argc - 1);
	m = 0;
	while(n >= 1)
    {
        while(argv[n][m] != '\0')
			++m;
        write(1, argv[n], m);
        write(1, "\n", 1);
		--n;
    }
	return (0);
}