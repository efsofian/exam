#include <unistd.h>

char ft_sw(char c)
{
  if (c >= 'a' && c <= 'z')
    return (c - 32);
  else if (c >= 'A' && c <= 'Z')
    return (c + 32);
  else
    return (c);
}

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    write (1, "\n", 1);
    return (0);
  }
  int i = 0;
  while (argv[1][i])
  {
    char temp = ft_sw(argv[1][i]);
    write (1, &temp, 1);
    i++;
  }
  write (1, "\n", 1);
  return (0);
}
