#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void	print_bits(unsigned char octet)
{
  int i = 128;
  char c;
  unsigned char sky = octet << 4;
  unsigned char sky2 = octet >> 4;
  unsigned char sky3 = sky | sky2;

  while (i > 0)
  {
    if (sky3 < i)
    {
      ft_putchar('0');
      i = i / 2;
    }
    else
    {
      ft_putchar('1');
      sky3 = sky3 - i;
      i = i / 2;
    }
  }
}
int main(void)
{
  unsigned char x = 122;

  print_bits(x);
  return (0);
}
