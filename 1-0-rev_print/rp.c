#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
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
  if (argc != 2)
  {
    write (1, "\n", 1);
    return (0);
  }
  else
  {
    int i;

    i = 0;
    int j = ft_strlen(argv[1]);
    while (j > 0)
    {
      ft_putchar(argv[1][j - 1]);
      j--;
      i++;
    }
    write (1, "\n", 1);
  }
  return (0);
}
