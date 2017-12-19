#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void ft_putstr(char *str)
{
  int i = 0;
  while (str[i])
  {
    ft_putchar(str[i]);
    i++;
  }
}

int main(int argc, char **argv)
{
  int x = argc;
  ft_putstr(argv[x-1]);
  ft_putchar('\n');
  return (0);
}
