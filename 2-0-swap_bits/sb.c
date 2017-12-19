#include <unistd.h>


void	print_bits(unsigned char octet)
{
  int i = 128;
  int j = i;
  char c;

  while (i > 0)
  {
    while (i >= j)
    {
    if (octet < i)
    {
      c = '0';
      write(1, &c, 1);
       i = i/2;

    }
    else
    {
      c = '1';
      write(1, &c, 1);
      octet = octet - i;
      i = i / 2;
    }
  }
  while (i < j)
  {
    if (octet < i)
    {
      c = '1';
      write(1, &c, 1);
       i = i/2;

    }
    else
    {
      c = '0';
      write(1, &c, 1);
      octet = octet - i;
      i = i / 2;
    }
  }
  }
}

int main()
{
  unsigned char x = 164;
  print_bits(x);
  return (0);
}
