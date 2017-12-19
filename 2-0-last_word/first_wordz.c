#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void ft_lw(char *str)
{
  int i;

  i = 0;
  while (str[i] && (str[i] == ' ' || str[i] == '\t'))
    i++;
  while (str[i] && str[i] != ' ' && str[i] != '\t')
  {
    ft_putchar(str[i]);
    i++;
  }
}

int main(int argc, char **argv)
{
  if (argc != 2)
    return (0);
  else
  {
    ft_lw(argv[1]);
    return (0);
  }
}
