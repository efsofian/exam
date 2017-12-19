#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void ft_lw(char *str)
{
  int i;
  int j;

  i = 0;
  while (str[i])
  {
    if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] >= 33 && str[i + 1] <= 127)
      j = i + 1;
    i++;
  }
  while (str[j])
  {
    ft_putchar(str[j]);
    j++;
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
