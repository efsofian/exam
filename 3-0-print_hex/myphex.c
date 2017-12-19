#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_phex(int i)
{
  char base[16] = "0123456789abcdef";
  if (i > 15)
    ft_phex(i / 16);
  ft_putchar(base[i % 16]);
}

int main(void)
{
  ft_phex(25570);
  return (0);
}
