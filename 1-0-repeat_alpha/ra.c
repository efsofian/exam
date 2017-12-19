#include <unistd.h>

void ft_putchar(char c)
{
  write (1, &c, 1);
}

int ft_repeat(char yo)
{
  if (yo >= 'a' && yo <= 'z')
  {
    return (yo - ('a' - 1));
  }
  else if (yo >= 'A' && yo <= 'Z'){
    return (yo - ('A' - 1));
  }
  else
  return (1);

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
  }
  return (0);
}
