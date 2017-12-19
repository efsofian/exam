#include <unistd.h>

int ft_atoi(char *str)
{
  int indice = 1;
  int ret = 0;
  int i = 0;
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
    ret = ret * 10 + str[i] - '0';
    i++;
  }
  return (ret * i);
}

int main(int argc, char **argv)
{
  if (argc != 2)
    return (0);

  int x = ft_atoi(argv[1]);
  if (x <= 0)
    return (0);
  int i = 2;
  while (x < i)
  {
    if (x )
  }
}
