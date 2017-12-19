#include <unistd.h>

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
  i++;
  return (i);
}

void ft_putchar(char c)
{
  write(1, &c, 1);
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

char *ft_strrev(char *str)
{
  int i;
  int j;
  char temp;

  i = 0;
  j = ft_strlen(str) - 1;
  while (i < j)
  {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
  return (str);
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
    ft_strrev(argv[1]);
    ft_putstr(argv[1]);
    write(1, "\n", 1);
    return (0);
  }
}
