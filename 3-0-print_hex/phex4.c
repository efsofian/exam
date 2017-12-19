#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void ft_print_hex(unsigned char c)
{
  char base[16] = "0123456789abcdef";

  ft_putchar(base[c / 16]);
  ft_putchar(base[c % 16]);
}

int main(void)
{
  ft_print_hex(255);
  return (0);
}
