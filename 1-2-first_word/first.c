#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void ft_word(char *str)
{
  int i;

  i = 0;
  while (str[i] != ' ' || str[i] != '\t')
  {
    if (str[i] == ' ' || str[i] == '\t')
    break;
    ft_putchar(str[i]);
    i++;
  }
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

int main(int argc, char **argv)
{
  int i;
  char *mdr;

  i = 0;
  mdr = argv[1];

  if (argc != 2)
  {
    ft_putchar('\n');
    return (0);
  }
  else
  {
    while (mdr[i] == ' ' || mdr[i] == '\t')
    i++;
  }
  while (mdr[i] && mdr[i] != ' ' && mdr[i] != '\t')
  {
    ft_putchar(mdr[i]);
    i++;
  }
  ft_putchar('\n');
  return (0);
}
