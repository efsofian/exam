#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void print_bits(unsigned char octet)
{
  int i = 0;
  char MDR[8];
  int j = 7;
  while (i < 8)
  {
    if (octet % 2 == 0)
    {
      MDR[i] = '0';
      octet = octet / 2;
    }
    else if (octet % 2 == 1)
    {
      MDR[i] = '1';
      octet = (octet - 1) / 2;
    }
    i++;
  }
  while (j >= 0)
  {
    ft_putchar(MDR[j]);
    j--;
  }
}

int main()
{
  unsigned char x = 22;
  print_bits(x);
  return (0);
}
