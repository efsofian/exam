#include <unistd.h>
#include <stdio.h>

void  ft_putchar(char c)
{
  write (1, &c, 1);
}

int main(int argc, char **argv)
{
  if (argc != 4)
  {
    ft_putchar('\n');
    return (0);
  }
  else
  {
    int r;
    if (argv[2][0] == '+')
      r = atoi(argv[1]) + atoi(argv[3]);
    else if (argv[2][0] == '-')
      r = atoi(argv[1]) - atoi(argv[3]);
    else if (argv[2][0] == 42)
      r = atoi(argv[1]) * atoi(argv[3]);
    else if (argv[2][0] == '/')
      r = atoi(argv[1]) / atoi(argv[3]);
    else if (argv[2][0] == '%')
      r = atoi(argv[1]) % atoi(argv[3]);
    printf("%d", r);
    ft_putchar('\n');
    return (0);
  }
}
