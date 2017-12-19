#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void ft_rot(char *str)
{
  int i;

  i = 0;
  while (str[i])
  {
    if (str[i] >= 'a' && str[i] <= 'm')
      ft_putchar(str[i] + 13);
    else if (str[i] > 'm' && str[i] <= 'z')
      ft_putchar(str[i] - 13);
    else if (str[i] >= 'A' && str[i] <= 'M')
      ft_putchar(str[i] + 13);
    else if (str[i] > 'M' && str[i] <= 'Z')
      ft_putchar(str[i] - 13);
    else
      ft_putchar(str[i]);
    i++;
  }
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
    ft_rot(argv[1]);
    write (1, "\n", 1);
    return (0);
  }
}
