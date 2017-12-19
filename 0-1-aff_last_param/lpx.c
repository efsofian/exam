#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

int main (int argc, char **argv)
{
  int i;

  i = 0;
  if (argc < 2)
  {
    write (1, "\n", 1);
    return (0);
  }
  else {
    while (argv[i])
      i++;
    int j = 0;
    while (argv[i - 1][j])
    {
      write (1, &argv[i-1][j], 1);
      j++;
    }
    write (1, "\n", 1);
    return (0);
  }
}
