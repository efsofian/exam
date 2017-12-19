#include <stdio.h>

int	ft_atoi(const char *str)
{
  int i = 0;
  int result = 0;
  int indice = 1;

  while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
    i++;
  if (str[i] == '+')
    i++;
  else if (str[i] == '-')
  {
    indice = -1;
    i++;
  }
  while (str[i] >= '0' && str[i] <= '9')
  {
    result = result * 10 + str[i] - '0';
    i++;
  }
  return (result * indice);
}

int main(int argc, char **argv)
{
  if (argc == 2)
  {
    printf("%d", ft_atoi(argv[1]));
    return (0);
  }
}
