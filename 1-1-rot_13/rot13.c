#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i])
  {
    ft_putchar(str[i]);
    i++;
  }
}

void ft_rot13(char *str)
{
  int i;

  i = 0;
  while (str[i])
  {
    if (str[i] >= 'a' && str[i] <= 'm')
    str[i] = str[i] + 13;
    else if (str[i] > 'm' && str[i] <= 'z')
    str[i] = str[i] - 13;
    if (str[i] >= 'A' && str[i] <= 'M')
    str[i] = str[i] + 13;
    else if (str[i] > 'M' && str[i] <= 'Z')
    str[i] = str[i] - 13;
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
    ft_rot13(argv[1]);
    ft_putstr(argv[1]);
    write(1, "\n", 1);
    return (0);
  }
}
