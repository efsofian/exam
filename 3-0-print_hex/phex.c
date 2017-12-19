#include <unistd.h>

void ft_print_hex(int i)
{
	char c;
	char base[16] = "0123456789abcdef";

	if (i > 15)
		ft_print_hex(i / 16);
	c = base[i % 16];
	write(1, &c, 1);
}

int ft_atoi(char *c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (c[j] > 47 && c[j] < 58)
	{
		i = i * 10 + c[j] - 48;
		j++;
	}
	return (i);
}

int main(int ac, char **av)
{
	int i;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = ft_atoi(av[1]);
	ft_print_hex(i);
	write(1, "\n", 1);
	return (0);
}
