#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

int ft_last(char *str)
{
  int i;
  int j;

  i = 0;
  while (str[i])
  {
    if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 127)
      j = i + 1;
    i++;
  }
  while (str[j] >= 33 && str[j] <= 127)
  {
      ft_putchar(str[j]);
      j++;
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
    ft_last(argv[1]);
    write (1, "\n", 1);
    return (0);
  }
}
