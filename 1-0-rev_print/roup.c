#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void ft_rev(char *str)
{
  int i;

  i = 0;
  int j = ft_strlen(str) - 1;
  while (str[i])
  {
    ft_putchar(str[j]);
    j--;
    i++;
  }
}

int main(int argc, char **argv)
{
  if (argc != 2)
    return (0);
  else
  {
    ft_rev(argv[1]);
    write (1, "\n", 1);
    return (0);
  }
}
