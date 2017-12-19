#include <unistd.h>

int ft_count(char c)
{
  if (c >= 'a' && c <= 'z')
   return (c - ('a' - 1));
  else if (c >= 'A' && c <= 'Z')
    return (c - ('A' - 1));
  else
    return (1);
}
void ft_ralf(char *str, char c)
{

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
      while (j < ft_count(argv[1][i]))
      {
        write (1, &argv[1][i], 1);
        j++;
      }
      i++;
    }
    return (0);
  }
}
