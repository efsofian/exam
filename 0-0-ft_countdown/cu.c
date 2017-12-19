#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

int main(void)
{
  int i = 0;
  int x = '9';
  while (x >= '0')
  {
    ft_putchar(x);
    x--;
  }
}
