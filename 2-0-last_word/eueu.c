#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

int main(int argc, char **argv)
{
  if (argc != 2)
    return (0);
  else
  {
    int i;
    int j;

    i = 0;
    while (argv[1][i])
    {
      if ((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i + 1] >= 33 && argv[1][i + 1] <= 127)
      j = i + 1;
      i++;
    }
    while (argv[1][j])
    {
      ft_putchar(argv[1][j]);
      j++;
    }
    ft_putchar('\n');
    return (0);
  }
}
