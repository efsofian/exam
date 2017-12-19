#include <unistd.h>

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
  int i;
  int j;

  i = 0;
  if (argc != 2)
  {
    write (1, "\n", 1);
    return (0);
  }
  else
  {
    j = ft_strlen(argv[1]);
    while (i < ft_strlen(argv[1]))
    {
      write(1, &argv[1][j - 1], 1);
      i++;
      j--;
    }
    write (1, "\n", 1);
    return (0);
  }
}
