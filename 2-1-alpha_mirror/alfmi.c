#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void alf(char *str)
{
  int i;

  i = 0;
  while (str[i])
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      {
        ft_putchar('m' - (str[i] - 'n'));
      }
    else if (str[i] >= 'A' && str[i] <= 'Z')
    {
      ft_putchar('M' - (str[i] - 'N'));
    }
    else
      ft_putchar(str[i]);
    i++;
  }
}

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    ft_putchar('\n');
    return (0);
  }
  else
  {
    alf(argv[1]);
    ft_putchar('\n');
    return (0);
  }
}
