#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void ft_putstr(char *str)
{
  int i = 0;
  while (str[i])
  {
    ft_putchar(str[i]);
    i++;
  }
}

void	ft_putnbr(int n)
{
	char c;

	if (n / 10  > 0)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int ft_atoi(const char *str)
{
  int i = 0;
  int result = 0;
  int indice = 1;

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
   return (indice * result);
}

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    write (1, "\n", 1);
    return (0);
  }
  else
  {
    int i = 1;
    int x = 0;
    while (i < 10)
    {
      ft_putnbr(i);
      ft_putstr(" x ");
      ft_putnbr(ft_atoi(argv[1]));
      ft_putstr(" = ");
      ft_putnbr(ft_atoi(argv[1]) * i);
      ft_putchar('\n');
      i++;
    }
    ft_putchar('\n');
    return (0);
  }
}
