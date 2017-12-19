#include "header.h"

int		ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_init_lst(int *par, int *cro, int *acc)
{
	*par = 0;
	*cro = 0;
	*acc = 0;
}

void	ft_inc_right_bracket_counter(char c, t_lst *lst)
{
	if (c == '(' || c == ')')
		lst->par += 1;
	if (c == '[' || c == ']')
		lst->cro += 1;
	if (c == '{' || c == '}')
		lst->acc += 1;
}


int		ft_brackets_backward(char *s)
{
	int		i;
	t_lst	lst;

	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		ft_init_lst(&lst.par, &lst.cro, &lst.acc);
		if (s[i] == ')' || s[i] == ']' || s[i] == '}')
		{
			if (!(ft_check_one_bracket(s, i, &lst, 1)))
				return (0);
		}
		i--;
	}
	return (1);
}

int		ft_brackets_forward(char *s)
{
	int		i;
	t_lst	lst;

	i = 0;
	while (s[i])
	{
		ft_init_lst(&lst.par, &lst.cro, &lst.acc);
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
		{
			if (!(ft_check_one_bracket(s, i, &lst, 0)))
				return (0);
		}
		i++;
	}
	return (1);
}

int		ft_check_for_end_bracket(char c, t_lst *lst)
{
	if ((c == '(' && lst->par == 0) || (c == ')' && lst->par == 0))
	{
		if (lst->cro != 0 || lst->acc != 0)
			return (0);
		return (1);
	}
	if ((c == '[' && lst->cro == 0) || (c == ']' && lst->cro == 0))
	{
		if (lst->par != 0 || lst->acc != 0)
			return (0);
		return (1);
	}
	if ((c == '{' && lst->acc == 0) || (c == '}' && lst->acc == 0))
	{
		if (lst->par != 0 || lst->cro != 0)
			return (0);
		return (1);
	}
	return (-1);
}


int		ft_check_one_bracket_forward(char *s, int i, t_lst *lst)
{
	char	c;
	int		closed;

	c = ft_define_reverse_bracket(s[i]);
	closed = 0;
	while (s[i] && closed != 1)
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
			ft_inc_right_bracket_counter(s[i], lst);
		else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
		{
			if (!(ft_dec_right_bracket_counter(s[i], lst)))
				return (0);
		}
		if (s[i] == c)
		{
			if (!(closed = ft_check_for_end_bracket(c, lst)))
				return (0);
		}
		i++;
	}
	if (closed != 1)
		return (0);
	return (1);
}

int		ft_check_one_bracket_backward(char *s, int i, t_lst *lst)
{
	char	c;
	int		closed;

	c = ft_define_reverse_bracket(s[i]);
	closed = 0;
	while (i >= 0 && closed != 1)
	{
		if (s[i] == ')' || s[i] == ']' || s[i] == '}')
			ft_inc_right_bracket_counter(s[i], lst);
		else if (s[i] == '(' || s[i] == '[' || s[i] == '{')
		{
			if (!(ft_dec_right_bracket_counter(s[i], lst)))
				return (0);
		}
		if (s[i] == c)
		{
			if (!(closed = ft_check_for_end_bracket(c, lst)))
				return (0);
		}
		i--;
	}
	if (closed != 1)
		return (0);
	return (1);
}

int		ft_check_one_bracket(char *s, int i, t_lst *lst, int mod)
{
	if (mod == 0)
		return (ft_check_one_bracket_forward(s, i, lst));
	return (ft_check_one_bracket_backward(s, i, lst));
}

int		ft_dec_right_bracket_counter(char c, t_lst *lst)
{
	if (c == '(' || c == ')')
		lst->par -= 1;
	if (c == '[' || c == ']')
		lst->cro -= 1;
	if (c == '{' || c == '}')
		lst->acc -= 1;
	if (lst->par < 0 || lst->cro < 0 || lst->acc < 0)
		return (0);
	return (1);
}

char	ft_define_reverse_bracket(char c)
{
	if (c == '(')
		return (')');
	if (c == ')')
		return ('(');
	if (c == '[')
		return (']');
	if (c == ']')
		return ('[');
	if (c == '{')
		return ('}');
	if (c == '}')
		return ('{');
	return (0);
}


void	ft_print_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_print_ok(void)
{
	write(1, "OK\n", 3);
}

int		ft_return_newline(void)
{
	write(1, "\n", 1);
	return (0);
}



int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc < 2)
		return (ft_return_newline());
	while (i < argc)
	{
		if (!(ft_brackets_forward(argv[i])))
			(ft_print_error());
		else
		{
			if (!(ft_brackets_backward(argv[i])))
				ft_print_error();
			else
				ft_print_ok();
		}
		i++;
	}
	return (0);
}
