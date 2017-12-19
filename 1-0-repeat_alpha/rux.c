#include <unistd.h>

int ft_countplacemin(char c)
{
  int i;

  i = c - 96;
  return (i);
}

int ft_countplacemaj(char c)
{
  int i;

  i = c - 64;
  return (i);
}

int main(int argc, char **argv)
{
  if (argc > 2)
    return (0);
  int i = 0;
  while (argv[1][i])
  {
    if(argv[1][i] >= 65 && argv[1][i] <= 90)
    {
      int x = 0;
      while (x < ft_countplacemaj(argv[1][i]))
      {
          write(1, &argv[1][i], 1);
          x++;
      }
    }
    else if (argv[1][i] >= 97 && argv[1][i] <= argv[1][i] <= 122)
    {
      int x = 0;
      while (x < ft_countplacemin(argv[1][i]))
      {
        write (1, &argv[1][i], 1);
        x++;
      }
    }
    else
      write (1, &argv[1][i], 1);
    i++;
  }
  write (1, "\n", 1);
  return (0);
}
