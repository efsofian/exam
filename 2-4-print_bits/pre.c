#include <unistd.h>
#include <string.h>

void print_bits(unsigned char octet)
{
  int i = 128;

  while (i > 0)
  {
    if (octet < i)
    {
      write (1, "0", 1);
      i = i / 2;
    }
    else
    {
      write (1, "1", 1);
      octet = octet - i;
      i = i / 2;
    }
  }
}

int main(int argc, char **argv)
{
  unsigned char x = 128;
  print_bits(x);
  return (0);
}
