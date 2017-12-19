#include "header.h"

void	ft_del_lst_elem(t_lst **lst)
{
	t_lst	*tmp;

	tmp = *lst;
	if ((*lst)->prev && (*lst)->next)
	{
		(*lst)->prev->next = (*lst)->next;
		(*lst)->next->prev = (*lst)->prev;
		*lst = (*lst)->prev;
	}
	else if (!(*lst)->prev && (*lst)->next)
	{
		(*lst)->next->prev = NULL;
		*lst = (*lst)->next;
	}
	else if ((*lst)->prev && !(*lst)->next)
	{
		(*lst)->prev->next = NULL;
		*lst = (*lst)->prev;
	}
	else
		*lst = NULL;
	free(tmp);
}

int		ft_do_op(int a, int *b, char op)
{
	if (op == '+')
		*b = a + *b;
	else if (op == '-')
		*b = a - *b;
	else if (op == '*')
		*b = a * *b;
	else if (op == '/')
	{
		if (*b == 0)
			return (0);
		*b = a / *b;
	}
	else if (op == '%')
	{
		if (*b == 0)
			return (0);
		*b = a % *b;
	}
	else
		return (0);
	return (1);
}

int		ft_do_rpn_calc(t_lst *lst, int *result)
{
	while (1)
	{
		while (lst->next && !lst->op)
			lst = lst->next;
		if (!lst->op || !lst->prev || !lst->prev->prev || lst->prev->op ||
			lst->prev->prev->op)
			return (0);
		if (!(ft_do_op(lst->prev->prev->nb, &lst->prev->nb, lst->op)))
			return (0);
		ft_del_lst_elem(&lst);
		lst = lst->prev;
		ft_del_lst_elem(&lst);
		if (!lst->next)
		{
			*result = lst->nb;
			return (1);
		}
	}
	return (0);
}


t_lst	*ft_add_lst_elem(t_lst *lst, int nb, char op)
{
	t_lst	*tmp;

	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	if (!(tmp->next = ft_set_lst(tmp->next, nb, op)))
		return (NULL);
	tmp->next->prev = tmp;
	return (lst);
}

t_lst	*ft_set_lst(t_lst *lst, int nb, char op)
{
	if (!lst)
	{
		if (!(lst = (t_lst*)malloc(sizeof(t_lst))))
			return (NULL);
		if (!op)
		{
			lst->nb = nb;
			lst->op = 0;
		}
		else
		{
			lst->nb = 0;
			lst->op = op;
		}
		lst->prev = NULL;
		lst->next = NULL;
		return (lst);
	}
	return (ft_add_lst_elem(lst, nb, op));
}

t_lst	*ft_make_lst(char *s)
{
	int		i;
	t_lst	*lst;

	i = 0;
	lst = NULL;
	while (s[i])
	{
		while (s[i] == ' ')
			i++;
		if ((s[i] == '-' && s[i + 1] >= '0' && s[i + 1] <= '9') || (s[i] >= '0'
			&& s[i] <= '9'))
		{
			if (!(lst = ft_set_lst(lst, atoi(&s[i]), 0)))
				return (NULL);
		}
		else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' ||
				s[i] == '%')
		{
			if (!(lst = ft_set_lst(lst, 0, s[i])))
				return (NULL);
		}
		while (s[i] && s[i] != ' ')
			i++;
	}
	return (lst);
}


void	ft_print_result(int result)
{
	printf("%d\n", result);
}

int		ft_return_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int		main(int argc, char **argv)
{
	int		result;
	t_lst	*lst;

	result = 0;
	if (argc != 2)
		return (ft_return_error());
	if (!(lst = ft_make_lst(argv[1])))
		return (ft_return_error());
//	deb_print_lst(lst);
	if (!(ft_do_rpn_calc(lst, &result)))
		return (ft_return_error());
	ft_print_result(result);
	return (0);
}
