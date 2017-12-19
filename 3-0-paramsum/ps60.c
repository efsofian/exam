#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
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

void ft_putnbr(int n)
{
  if (n < 0)
  {
    ft_putchar('-');
    n = -n;
  }
  if (n > 9)
  {
    ft_putnbr(n / 10);
    ft_putnbr(n % 10);
  }
  else
    ft_putchar(n + '0');
}

int main(int argc, char **argv)
{
  int i = 1;
  while (argv[i])
    i++;
  ft_putnbr(i - 1);
  return (0);
}
