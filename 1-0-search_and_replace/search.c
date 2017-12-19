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

void ft_replace(char a, char b)
{
  if (a == b)
  {
    a = b;
  }
}
int main(int argc, char **argv)
{
  int i;

  i = 0;
  if (argc != 4)
  {
    ft_putchar('\n');
    return (0);
  }
  else
  {
    while (argv[1][i])
    {
      if(argv[1][i] == argv[2][0])
        argv[1][i] = argv[3][0];
      i++;
    }
    ft_putstr(argv[1]);
    ft_putchar('\n');
    return (0);
  }
}
