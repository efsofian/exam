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

void ft_switch(char *str)
{
  int i;

  i = 0;
  while (str[i])
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    str[i] = str[i] - 32;
    else if (str[i] >= 'A' && str[i] <= 'Z')
    str[i] = str[i] + 32;
    i++;
  }
}
int main(int argc, char **argv)
{
  if (argc != 2)
  {
    write (1, "\n", 1);
    return (0);
  }
  else
  {
    ft_switch(argv[1]);
    ft_putstr(argv[1]);
    ft_putchar('\n');
    return (0);
  }
}
