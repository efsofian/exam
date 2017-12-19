#include <unistd.h>

int ft_strlen(char *str)
{
  int i = 0;
  while (str[i])
    i++;
  return (i);
}

int ft_checkif(char *str, char c)
{
  int i = 0;
  while (str[i])
  {
    if (str[i] == c)
      return (1);
    i++;
   }
   return (0);
}

int ft_checkfirst(char *str, char c, int len)
{
  int i = 0;
  while (str[i])
  {
    if (str[i] == c)
      break;
    i++;
  }
  if (i == len)
    return (1);
  return (0);
}

int main(int argc, char **argv)
{
  if (argc != 3)
  {
    write (1, "\n", 1);
    return (0);
  }
  int i = 0;

  while (argv[1][i])
  {
    if (ft_checkif(argv[2], argv[1][i]) == 1 && ft_checkfirst( argv[1], argv[1][i], i))
      write (1, &argv[1][i], 1);
    i++;
  }
  write (1, "\n", 1);
  return (0);
}
