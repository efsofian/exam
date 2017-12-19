#include <unistd.h>

void ft_reverse_bit(unsigned char octet)
{
  int i = 128;

  unsigned char rev = ~octet;

  while (i > 0)
  {
    if (rev < i)
    {
      write (1, "0", 1);
      i = i/2;
    }
    else
    {
      write (1, "1", 1);
      rev = rev - i;
      i = i / 2;
    }
  }

}

int main(void)
{
  unsigned char x = 25;
  ft_reverse_bit(x);
  return (0);
}
