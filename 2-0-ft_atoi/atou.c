#include <stdio.h>

int ft_atoi(char *str)
{
  int result = 0;
  int indice = 1;
  int i = 0;

  while (str[i] > 8 && str[i] <= 14 || str[i] == ' ')
    i++;

  if (str[i] == '+')
    i++;
  else if(str[i] == '-')
  {
    indice = -1;
    i++;
  }
  while (str[i] >= '0' && str[i] <= '9')
  {
    result = result * 10 + str[i] - '0';
    i++;
  }
  return (indice * result);
}

int main(int argc, char **argv)
{
  if (argc == 2)
  {
    printf("%d", ft_atoi(argv[1]));
    return (0);
  }
}
