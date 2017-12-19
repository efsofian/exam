#include <unistd.h>

void ft_swap_bit(unsigned char octet)
{
  int i = 128;
  unsigned char temp1 = octet >> 4;
  unsigned char temp2 = octet << 4;
  unsigned char temp = temp1 | temp2;


  while (i > 0)
  {
    if (temp < i)
    {
      write (1, "0", 1);
      i = i / 2;
    }
    else
    {
      write (1, "1", 1);
      temp = temp - i;
      i = i / 2;
    }
  }

}

int main(void)
{
  unsigned char x = 25;
  ft_swap_bit(x);
  return (0);
}
