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

    i = 0;
    while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
      i++;
    while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
    {
      ft_putchar(argv[1][i]);
      i++;
    }
    ft_putchar('\n');
    return (0);
  }
}
