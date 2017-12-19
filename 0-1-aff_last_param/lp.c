
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


int main(int argc, char **argv) {
  int i;

  i = 0;
  if (argc <= 1)
  {
    write (1, "\n", 1);
    return (0);
  }
  else
  {
    while (argv[i])
    {
      i++;
    }
    ft_putstr(argv[i - 1]);
    write (1, "\n", 1);
  }
  return (0);
}
