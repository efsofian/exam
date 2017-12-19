#include <unistd.h>

void print_bit(unsigned char octet)
{
  int i = 128;
  unsigned char t1 = octet >> 4;
  unsigned char t2 = octet << 4;
  unsigned char t3 = t1 | t2;

  while (i > 0)
  {
    if (t3 < i)
    {
      write (1, "0", 1);
      i = i / 2;
    }
    else
    {
      write (1, "1", 1);
      t3 = t3 - i;
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
