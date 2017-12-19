#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void ft_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i])
  {
    ft_putchar(str[i]);
    i++;
  }
}

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
  i++;
  return (i);
}
int main(int argc, char **argv)
{
  if (argc <= 1)
  {
    return (0);
  }
  else {
    int i = 0;
    while (argv[i])
    {
      i++;
    }
    ft_putstr(argv[i - 1]);
    ft_putchar('\n');
    return (0);
  }
}
