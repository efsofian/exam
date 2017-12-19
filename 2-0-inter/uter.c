#include <unistd.h>

int ft_solo(char c, char *str1, int len)
{
  int i;

  i = 0;
  while (str1[i])
  {
    if (str1[i] == c)
    {
      break;
    }
    i++;
  }
  if (i == len)
    return (1);
  return (0);
}

int ft_check(char c, char *str2)
{
  int i;

  i = 0;
  while (str2[i])
  {
    if (str2[i] == c)
      return (1);
    i++;
  }
  return (0);
}

void inter(char *str1, char *str2)
{
  int i;

  i = 0;
  while (str1[i])
  {
    if ((ft_check(str1[i], str2) == 1) && ft_solo(str1[i], str1, i) == 1)
      write (1, &str1[i], 1);
    i++;
  }
}

int main(int argc, char **argv)
{
  if (argc != 3)
  {
    write (1, "\n", 1);
    return (0);
  }
  else
  {
    inter(argv[1], argv[2]);
    write (1, "\n", 1);
    return (0);
  }
}
