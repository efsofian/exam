#include "check.h"
#include <stdio.h>

int		rook(char **str, int i, int a, int size)
{
	int savei = i;
	if (i >= 0 && i <= size && a >= 0 && a <= size && str[i][a] != 'K')
	{
		while (i > 0 && str[i][a] != 'K')
			i--;
		while (i < (size - 1) && str[i][a] != 'K')
			i++;
		if (str[i][a] != 'K')
			i = savei;
		i = ((str[i][a] == 'K') ? (i) : (i = savei));
		while (a > 0 && str[i][a] != 'K')
			a--;
		while (a < size && str[i][a] != 'K')
			a++;
	}
	if (str[i][a] == 'K')
		success(str);
	return (0);
}

int		bishop(char **str, int i, int a, int size)
{
	int savea = a;
	int savei = i;
	if (i >= 0 && i <= size && a >= 0 && a <= size && str[i][a] != 'K')
	{
		while (i > 0 && a > 0 && str[i][a] != 'K')
		{
			i--;
			a--;
		}
		while (i < (size - 1) && a < size && str[i][a] != 'K')
		{
			i++;
			a++;
		}
		i = ((str[i][a] == 'K') ? (i) : (i = savei));
		a = ((str[i][a] == 'K') ? (a) : (a = savea));
		while (i > 0 && a < size && str[i][a] != 'K')
		{
			i--;
			a++;
		}
		while (i < (size - 1) && a > 0 && str[i][a] != 'K')
		{
			i++;
			a--;
		}
	}
	if (str[i][a] == 'K')
		success(str);
	return (0);
}

void	exxit(char **str)
{
	if (str)
		free(str);
	ft_putstr("\n");
	exit(1);
}

int		queen(char **str, int i, int a, int size)
{
	int ret;

	ret = rook(str, i, a, size);
	bishop(str, i, a, size);
	return (0);
}

int		pawn(char **str, int i, int a, int size)
{
	if (str[i - 1][a - 1] == 'K'
			&& (i - 1) >= 0 && (i - 1) <= size &&
			(a - 1) >= 0 && (a - 1) <= size)
			return (1);
	if (str[i - 1][a + 1] == 'K'
			&& (i - 1) >= 0 && (i - 1) <= size &&
			(a + 1) >= 0 && (a + 1) <= size)
			return (1);
	return (0);
}

void	ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
		write(1, &str[i++], 1);
}

int		ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

void	fail(char **str)
{
	ft_putstr("Fail");
	exxit(str);
}

void	success(char **str)
{
	ft_putstr("Success");
	exxit(str);
}

void	parse(char **str, int size)
{
	int a = 0;
	int i = 0;
	int ret = 0;
	while (i != size)
	{
		while (a <= size)
		{
			if (str[i][a] == 'P')
				ret = pawn(str, i, a, size);
			if (str[i][a] == 'B')
				ret = bishop(str, i, a, size);
			if (str[i][a] == 'R')
				ret = rook(str, i, a, size);
			if (str[i][a] == 'Q')
				ret = queen(str, i, a, size);
			a++;
		}
		i++;
		a = 0;
	}
	if (ret > 0)
		success(str);
	else if (ret == 0)
		fail(str);
}

void	test(char **tab, int size)
{
	int k = 0;
	int i = 0;
	int a = 0;

	while (i != size)
	{
		while (a <= size)
			k = ((tab[i][a++] == 'K') ? (k = k + 1) : k);
		i++;
		a = 0;
	}
	if (k < 1 || k > 1)
		exxit(tab);
}

int		main(int argc, char **argv)
{
	int		i = 1;
	char	**tab = NULL;
	int		size;

	if (argc > 1)
	{
		size = ft_strlen(argv[1]);
		if (size != argc - 1)
			exxit(tab);
		if (!(tab = (char **)malloc(sizeof(char *) * argc - 1)))
				exxit(tab);
		while (argv[i])
		{
			if (size != ft_strlen(argv[i]))
					exxit(tab);
			if (!(tab[i] = (char *)(sizeof(char) * size)))
				exxit(tab);
			tab[i - 1] = argv[i];
			i++;
		}
		test(tab, size);
		parse(tab, size);
	}
	else
		ft_putstr("\n");
	return (0);
}
