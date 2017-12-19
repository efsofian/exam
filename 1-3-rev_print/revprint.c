#include <unistd.h>

int ft_strlen(char * str)
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
    int j = ft_strlen(argv[1]) - 1;

    while (j >= 0)
    {
      write (1, &argv[1][j], 1);
      j--;
    }
  }
}
