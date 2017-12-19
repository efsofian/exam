#include <unistd.h>

void print_bit(unsigned char octet)
{
  int i = 128;
  unsigned char t = ~octet;
  while (i > 0)
  {
    if (t < i)
    {
      write (1, "0", 1);
      i = i / 2;
    }
    else
    {
      write (1, "1", 1);
      t = t - i;
      i = i / 2;
    }
  }
}
int main(void)
{
  unsigned char x = 25;
  print_bit(x);
  return (0);
}
