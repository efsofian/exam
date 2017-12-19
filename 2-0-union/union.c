#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void ft_check(char *str1, char c, int len)
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
    ft_putchar(str1[i]);
}

void ft_union(char *str1, char *str2)
{
  int i;
  int j;

  i = 0;

  while (str1[i])
  {
    ft_check(str1, str1[i], i);
    i++;
  }
  i = 0;
  while (str2[i])
  {
    j = 0;
    while (str1[j])
    {
      if (str2[i] == str1[j])
        break;
      j++;
    }
    if (!str1[j])
      ft_check(str2, str2[i], i);
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
    ft_union(argv[1], argv[2]);
    ft_putchar('\n');
    return (0);
  }
}
