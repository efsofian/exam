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
  if (argc != 2)
  {
    return (0);
  }
  else
  {
    int i = ft_strlen(argv[1]);
    while (i > 0)
    {
      if (argv[1][i] == ' ' || argv[1][i] == '\t')
      {
        i = i + 1;
        break;
      }
      i--;
    }
    while (argv[1][i])
    {
      write (1, &argv[1][i], 1);
      i++;
    }
    return (0);
  }
}
