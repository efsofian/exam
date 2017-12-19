#ifndef CHECK_H
# define CHECK_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_putstr(char *str);
int		ft_strlen(char *str);

int		pawn(char **str, int i, int a, int size);
int		bishop(char **str, int i, int a, int size);
int		rook(char **str, int i, int a, int size);
int		queen(char **str, int i, int a, int size);

void	success(char **str);

void	exxit(char **str);

#endif
