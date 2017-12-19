#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

int ft_repeat(char c)
{
  if (c >= 'a' && c <= 'z')
    return (c - ('a' - 1));
  else if (c >= 'A' && c <= 'Z')
    return (c - ('A' - 1));
  else
    return (1);
}

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    write (1, "\n", 1);
    return (0);
  }
  else
  {
    int i;
    int j;

    i = 0;
    while (argv[1][i])
    {
      j = 0;
      while(j < ft_repeat(argv[1][i]))
      {
        ft_putchar(argv[1][i]);
        j++;
      }
      i++;
    }
    ft_putchar('\n');
    return (0);
  }
}
