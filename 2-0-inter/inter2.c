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
int ft_first(char *str, char c, int len)
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

void ft_inter(char *str1, char *str2)
{
  int i;

  i = 0;
  while (str1[i])
  {
    if (ft_checkstring(str2, str1[i]) == 1 && ft_first(str1, str1[i], i) == 1)
      ft_putchar(str1[i]);
    i++;
  }
}

int main(int argc, char **argv)
{
  if (argc != 3)
  {
    write (1, "\n", 1);
    return (0);
  }
  else
  {
    ft_inter(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
  }
}
