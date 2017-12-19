#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

int ft_check(char *str2, char c)
{
  int i;

  i = 0;
  while (str2[i])
  {
    if (str2[i] == c)
      return (1);
    i++;
  }
  return (0);
}

int ft_solo(char *str1, char c, int len)
{
  int i;

  i = 0;
  while (str1[i])
  {
    if (str1[i] == c)
      break;
    i++;
  }
  if (i == len)
    return (1);
  return (0);
}

void ft_union(char *str1, char *str2)
{
  int i;

  i = 0;
  while (str1[i])
  {
    if (ft_check(str2, str1[i]) == 1 && ft_solo(str1, str1[i], i))
      ft_putchar(str1[i]);
    i++;
  }
}

int main(int argc, char **argv)
{
  if (argc != 3)
  {
    ft_putchar('\n');
    return (0);
  }
  else
  {
    ft_union(argv[1], argv[2]);
    ft_putchar('\n');
    return (0);
  }
}
