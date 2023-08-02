#include <unistd.h>

int main(int ac, char **av)
{
	int index = 0;
	if (ac == 2)
	{
		while (av[1][index])
		{
			if ((av[1][index] >= 'a' && av[1][index] < 'z') || (av[1][index] >= 'A' && av[1][index] < 'Z'))
				av[1][index] = av[1][index] + 1;
			else if (av[1][index] == 'z')
				av[1][index] = 'a';
			else if (av[1][index] == 'Z')
				av[1][index] = 'A';
			write(1, &av[1][index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
	return 0;
}