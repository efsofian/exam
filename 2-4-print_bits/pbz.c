#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void	print_bits(unsigned char octet)
{
  int i = 128;
  char c;

  while (i > 0)
  {
    if (octet < i)
    {
      ft_putchar('0');
      i = i / 2;
    }
    else
    {
      ft_putchar('1');
      octet = octet - i;
      i = i / 2;
    }
  }
}
int main(void)
{
  unsigned char x = 25;

  print_bits(x);
  return (0);
}
