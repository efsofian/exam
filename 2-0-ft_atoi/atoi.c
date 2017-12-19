#include <stdio.h>

int ft_atoi(char *str)
{
  int ret = 0;
  int i = 0;
  int indice = 1;
  while (str[i])
  {
    if (str[i] > 9 && str[i] < 14 || str[i] == ' ')
      i++;
    else if (str[i] == '+')
      i++;
    else if (str[i] == '-')
    {
      indice = -1;
      i++;
    }
    if (str[i] >= '0' && str[i] <= '9')
    {
      ret = ret * 10 + str[i] - '0';
      i++;
    }
  }
  return (ret * indice);
}

int main(int argc, char **argv)
{
  printf("%d", ft_atoi(argv[1]));
  return (0);
}
