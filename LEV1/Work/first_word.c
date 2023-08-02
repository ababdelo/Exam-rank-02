#include <unistd.h>

int	main(int ac, char ** av)
{
	int index = 0;
	if (ac == 2)
	{
		while (av[1][index] && (av[1][index] == '\t' || av[1][index] == ' '))
			index++;
		while (av[1][index] && (av[1][index] != '\t' && av[1][index] != ' '))
		{
			write(1, &av[1][index], 1);
			index++;	
		}
	}
	write(1, "\n", 1);
	return 0;
}