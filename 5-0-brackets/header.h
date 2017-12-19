#include <unistd.h>
typedef struct s_lst	t_lst;

struct	s_lst
{
	int	par;
	int	cro;
	int	acc;
};

void	ft_inc_right_bracket_counter(char c, t_lst *lst);
void	ft_init_lst(int *par, int *cro, int *acc);
void	ft_print_error(void);
void	ft_print_ok(void);
char	ft_define_reverse_bracket(char c);
int		ft_brackets_forward(char *s);
int		ft_brackets_backward(char *s);
int		ft_check_for_end_bracket(char c, t_lst *lst);
int		ft_check_one_bracket(char *s, int i, t_lst *lst, int mod);
int		ft_dec_right_bracket_counter(char c, t_lst *lst);
int		ft_return_newline(void);
int	ft_strlen(char *s);
