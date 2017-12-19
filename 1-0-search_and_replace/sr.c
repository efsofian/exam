#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

void ft_sr(char *str1, char lettre, char newlettre)
{
  int i;

  i = 0;
  while (str1[i])
  {
    if (str1[i] == lettre)
    {
      ft_putchar(newlettre);
    }
    else {
      ft_putchar(str1[i]);

  }
  i++;
}

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
    ft_sr(argv[1], argv[2][0], (char)argv[3][0]);
    ft_putchar('\n');
  }
  return (0);
}
