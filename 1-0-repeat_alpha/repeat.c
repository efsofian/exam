#include <unistd.h>

void ft_putchar (char c)
{
  write (1, &c, 1);
}

int ft_repeat(char letter)
{
  int repeat;

  if (letter >= 'a' && letter <= 'z')
    repeat = letter - 96;
  if (letter >= 'A' && letter <= 'Z')
    repeat = letter - 64;
  return (repeat);
}

int main(int argc, char **argv)
{
  int i;
  int j;

  i = 0;
  if (argc != 2)
  {
    write (1, "\n", 1);
    return (0);
  }
  else
  {
    while (argv[1][i])
    {
      j = 0;
      while (j < ft_repeat(argv[1][i]))
      {
        ft_putchar(argv[1][i]);
        j++;
      }
      i++;
    }
    write (1, "\n", 1);
    return (0);
  }
}
