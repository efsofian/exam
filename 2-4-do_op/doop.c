#include <unistd.h>
#include <stdio.h>

int ft_add(int a, int b)
{
  return (a + b);
}

int ft_sub(int a, int b)
{
  return (a - b);
}

int ft_div(int a, int b)
{
  return (a / b);
}

int ft_mult(int a, int b)
{
  return (a * b);
}

int ft_mod(int a, int b)
{
  return (a % b);
}



int ft_atoi(char *str)
{
  int i;
  int indice;
  int result;

  i = 0;
  indice = 1;
  result = 0;

  while (str[i] == ' ' || str[i] > 8 && str[i] < 14)
    i++;
  if (str[i] == '-')
    {
      indice = -1;
      i++;
    }
  else if (str[i] == '+')
    i++;
  while (str[i] >= '0' && str[i] <= '9')
  {
    result = result * 10 + str[i] - '0';
    i++;
  }
  return (result * indice);
}

int main(int argc, char **argv)
{
  int r;

  r = 0;
  if (argc != 4)
  {
    write (1, "\n", 1);
    return (0);
  }
  else
  {
    if (argv[2][0] == '+')
    {
      r = ft_atoi(argv[1]) + ft_atoi(argv[3]);
    }
    else if (argv[2][0] == '-')
    {
      r = ft_atoi(argv[1]) - ft_atoi(argv[3]);
    }
    else if (argv[2][0] == 'x')
    {
      r = ft_atoi(argv[1]) * ft_atoi(argv[3]);
    }
    else if (argv[2][0] == 'b')
    {
      r = ft_atoi(argv[1]) / ft_atoi(argv[3]);
    }
    else if (argv[2][0] == '%')
    {
      r = ft_atoi(argv[1]) % ft_atoi(argv[3]);
    }
    printf("%d", r);
    printf("%s", argv[2]);
    write (1, "\n", 1);
    return (0);
  }
}
