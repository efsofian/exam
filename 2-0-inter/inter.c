#include <unistd.h>

int ft_checkstring(char *str, char c)
{
  int i;

  i = 0;
  while (str[i])
  {
    if (str[i] == c)
      return (1);
    i++;
  }
  return (0);
}

int ft_checkfirst(char *str, char c, int len)
{
  int i;

  i = 0;
  while (str[i])
  {
    if (str[i] == c)
      break;
    i++;
  }
  if (i == len)
    return (1);
  return (0);
}

void ft_inter(char *str, char *str2)
{
  int i;

  i = 0;
  while (str[i])
  {
    if (ft_checkfirst(str, str[i], i) && ft_checkstring(str2, str[i]))
      write (1, &str[i], 1);
    i++;
  }
}

int		main(int argc, char *argv[])
{
	if (argc > 2)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
