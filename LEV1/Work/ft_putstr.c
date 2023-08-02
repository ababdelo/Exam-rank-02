#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index = -1;
	while (str[++index])
		write(1, &str[index], 1);
}

// int main()
// {
// 	ft_putstr("Hello there!\n");
// }