#include <unistd.h>

int ft_repeat(char c)
{
  if (c >= 'a' && c <= 'z')
    return (c - ('a' - 1));
  else if (c >= 'A' & c <= 'Z')
    return (c - ('A' - 1));
  else
  return (1);
}


int main(int argc, char **argv)
{
  int i;

  i = 0;
  if (argc != 2)
  {
    write (1, "\n", 1);
    return (0);
  }
  else
  {
    while (argv[1][i])
    {
      int j = 0;
      while (j < ft_repeat(argv[1][i]))
      {
        write(1, &argv[1][i], 1);
        j++;
      }
      i++;
    }
    write (1, "\n", 1);
    return (0);
  }
}
