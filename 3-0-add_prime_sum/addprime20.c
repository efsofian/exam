#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void ft_putnbr(int x)
{
  if (x < 0)
  {
    ft_putchar('-');
    x = -x;
  }
  if (x > 9)
  {
    ft_putnbr(x / 10);
    ft_putnbr(x % 10);
  }
  else
   ft_putchar(x + '0');
}

int ft_atoi(char *str)
{
  int i = 0;
  int indice = 1;
  int result = 0;

  while (str[i] == ' ' || str[i] > 9 && str[i] < 14)
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

int semisum(int x)
{
  int i = 2;
  while (i < x)
  {
    if (x % i == 0)
      return (0);
    i++;
  }
  return (1);
}

void add_prime_sum(int x)
{
  int i = 2;
  int count = 0;
  while (i <= x)
  {
    if (semisum(i))
      count = count + i;
    i++;
  }
  ft_putnbr(count);
}

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    write (1, "0\n", 2);
    return (0);
  }
  add_prime_sum(ft_atoi(argv[1]));
  return (0);
}
