#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_lst	t_lst;

struct	s_lst
{
	int		nb;
	char	op;
	t_lst	*prev;
	t_lst	*next;
};

void	ft_del_lst_elem(t_lst **lst);

void	ft_print_result(int result);

int		ft_do_op(int a, int *b, char op);

int		ft_do_rpn_calc(t_lst *lst, int *result);

int		ft_return_error(void);

t_lst	*ft_make_lst(char *s);
t_lst	*ft_set_lst(t_lst *lst, int nb, char op);
#endif
