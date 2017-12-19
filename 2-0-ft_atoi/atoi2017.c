#include <stdio.h>

int ft_atoi(const char *str)
{
  int i = 0;
  int indice = 1;
  int result = 0;

  while (str[i] > 9 && str[i] < 14 || str[i] == ' ')
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
  printf("%d", ft_atoi(argv[1]));
  return (0);
}
