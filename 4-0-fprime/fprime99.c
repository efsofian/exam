#include <stdio.h>

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    write (1, "\n", 1);
    return (0);
  }

  int i = 2;
  int nbr = atoi(argv[1]);

  while (i < nbr)
  {
    if (nbr % i == 0)
    {
      printf("%d*", i);
      nbr = nbr / i;
      i = 1;
    }
    i++;
  }
  if (nbr != 0)
    printf("%d", nbr);
  return (0);
}
